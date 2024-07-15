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
    int dp[1001][201] ;
    int f(vector<int>&v,int i,int k,int flg)
    {
        if(flg >= 2*k)
        {
           return 0 ;
        }

        if(i >= v.size())
        {
           return 0 ;
          
        }

        if(dp[i][flg] != -1)
        {
            return dp[i][flg] ;
        }

        if(flg % 2 == 0)
        {
            return dp[i][flg] = max(f(v,i + 1,k,flg),-1*v[i] + f(v,i + 1,k,flg + 1)) ;
        }
        
        return dp[i][flg] = max(f(v,i + 1,k,flg),v[i] + f(v,i + 1,k,flg + 1)) ;
    }
    int maxProfit(int k, vector<int>& v) {
        

        memset(dp,-1,sizeof(dp)) ;

        int ans = f(v,0,k,0) ;
        return ans ;
    }
};
void solve()
{
    int n,k ; cin>>n>>k ;
    vector<int>v(n) ;for(auto &temp:v) cin >> temp;
    Solution ans ;
    cout<<ans.maxProfit(k,v)<<"\n" ;
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