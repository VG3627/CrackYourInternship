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

int dp[10001] ;
class Solution {
public:

    int f(vector<int>&v,int x)
    {
        if(x < 0)
        {
            return 1e9 ;
        }
        if(x == 0)
        {
            return 0 ;
        }
        if(dp[x] != -1)
        {
            return dp[x] ;
        }
        int ans = 1e9 ;
        for(int i=0;i<v.size();i++)
        {
            ans = min(ans,1 + f(v,x - v[i])) ;
        }
        return dp[x] = ans ;
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp)) ;
        int ans = f(coins,amount) ;
        return (ans >= 1e9 ? -1 : ans) ;
    }
};
void solve()
{
    int n,x ; cin>>n>>x ;
    vector<int>v(n) ; for(auto &temp:v) cin >> temp;
    Solution ans ;
    cout<<ans.coinChange(v,x)<<"\n" ;
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