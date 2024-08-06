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
    string f(string &s)
    {
        string ans ;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] != '#')
            {
                ans.push_back(s[i]) ;
            }
            else
            {
                if(ans.size() == 0)
                {
                    continue ;
                }
                ans.pop_back() ;
            }
        }
        return ans ;
    }
    bool backspaceCompare(string s, string t) {
        return (f(s) == f(t)) ;
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