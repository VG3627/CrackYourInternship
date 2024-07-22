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
    
    int  M = 1e9 + 7 ;
    bool S(int i,int j)
    {
        if(i < 0 || j < 0 || i >= 4 || j >= 3 || (i == 3 && j == 0) || (i == 3 && j == 2))
        {
            return false ;
        }
        return true ;
    }
    int dp[5001][5][5] ;
    vector<pair<int,int>>dr = {{2,1},{2,-1},{1,2},{-1,2},{-2,1},{1,-2},{-2,-1},{-1,-2}} ;
    int f(int n,int i,int x,int y)
    {
        if(i >= n)
        {
            return 1 ;
        }

        if(dp[i][x][y] != -1)
        {
            return dp[i][x][y] ;
        }

        int ans = 0 ;
        for(auto &j:dr)
        {
            int u = x + j.first ;
            int v = y + j.second ;

            if(S(u,v) == true)
            {
               ans += (f(n,i + 1,u,v) % M) ;
               ans %= M ;
            }
        }
        return dp[i][x][y] = ans ;


    }
    int knightDialer(int n) {
        
        
        int ans = 0 ;
        memset(dp,-1,sizeof(dp)) ;
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<3;j++)
            {
                if( (i == 3 && j == 0) || (i == 3 && j == 2))
                {
                    continue ;
                }
                ans += (f(n,1,i,j) % M ) ;
                ans %= M ;
            }
        }
        return ans ;
    }
};
void solve()
{
    int n ; cin>>n ;
    Solution ans ;
    cout<<ans.knightDialer(n)<<"\n" ;
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