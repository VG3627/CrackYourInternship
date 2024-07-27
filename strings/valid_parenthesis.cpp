#include <bits/stdc++.h>
typedef long long ll;
#define vi     vector <int>
#define vll    vector <long long>
#define vs     vector <string>
#define vc     vector <char>
#define PII    pair<int,int>
#define mll    map<long long,long long>
#define UMII   unordered_map<int,int>
#define sz(a)  a.size()
#define all(a) a.begin(),a.end()
#define ff     first 
#define ss     second 
#define endl  "\n"
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char>mp ;
        mp['('] = ')' ;
        mp['{'] = '}' ;
        mp['['] = ']' ;

        stack<char>st ;

        for(int i=0;i<s.size();i++)
        {
            if(!st.empty() && mp[st.top()] == s[i])
            {
                st.pop() ;
            }
            else
            {
                st.push(s[i]) ;
            }
        }
        

        return (st.empty()) ;
        

    }
};
void solve()
{
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t ;
    cin>>t ;
    while(t--)
    {
        solve() ;
    }   
    return 0;
}