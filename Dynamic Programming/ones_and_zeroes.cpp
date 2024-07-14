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
int dp[601][101][101] ;
class Solution {
public:
    
    int f(vector<string>&s,int i,int m,int n,unordered_map<int,pair<int,int>>&mp)
    {
        if(m < 0 || n < 0)
        {
            return -1 ;
        }
        if(i >= s.size())
        {
            return 0 ;
        }
        if(dp[i][m][n] != -1)
        {
            return dp[i][m][n] ;
        }
        return dp[i][m][n] = max(1 + f(s,i + 1,m - mp[i].second,n - mp[i].first,mp),f(s,i + 1,m,n,mp)) ;
    }
    int findMaxForm(vector<string>& s, int m, int n) {
        unordered_map<int,pair<int,int>>mp ;

        for(int i=0;i<s.size();i++)
        {
            int c = 0 ;
            for(int j=0;j<s[i].size();j++)
            {
               c += (s[i][j] == '1') ;
            }
            mp[i] = {c,(int)s[i].size() - c} ;
        }
        memset(dp,-1,sizeof(dp)) ;
        int ans = f(s,0,m,n,mp) ;
        ans = max(ans,0) ;
        return ans ;
    }
};
void solve()
{
    int x ; cin>>x ;
    int m,n ; cin>>m>>n ;
    Solution ans ;
    vector<string>v ;
    for(int i=0;i<x;i++)
    {
        string tmp ; cin>>tmp ;
        
        v.push_back(tmp) ;
    }
    
    
    cout<<ans.findMaxForm(v,m,n)<<"\n" ;
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