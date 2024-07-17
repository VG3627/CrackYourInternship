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
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
        unordered_map<int,int>mp ;
    
        stack<int>s ;
        for(int i=b.size()-1;i>=0;i--)
        {
            while(!s.empty() && b[i] > s.top())
            {
                s.pop() ;
            }
            if(s.empty())
            {
                mp[b[i]] = -1 ;
            }
            else
            {
                mp[b[i]] = s.top() ;
            }
            s.push(b[i]) ;
        }
        vector<int>res ;
        for(int i=0;i<a.size();i++)
        {
           res.push_back(mp[a[i]]) ;
        }
        return res ;
    }
};
void solve()
{
    int n,m ; cin>>n>>m ;
    vector<int>a(n) ;for(auto &temp:a) cin >> temp;
    vector<int>b(m) ;for(auto &temp:b) cin >> temp;
    Solution ans ;
    vector<int>res = ans.nextGreaterElement(a,b) ;
    for (auto &i:res){
        cout << i << " ";
    }cout << "\n"; 

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t ;
    t=1 ;
    while(t--)
    {
        solve() ;
    }   
    return 0;
}