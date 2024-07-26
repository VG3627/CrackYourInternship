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
    bool Safe(int i,int j,int m,int n)
    {
        if(i < 0 || j < 0 || i >= m || j >= n)
        {
            return false ;
        }
        return true ;
    }
    int dp[101][101] ;
    vector<pair<int,int>>dr = {{1,0},{0,1}} ;

    int dfs(int m,int n,int x,int y)
    {
       if(x == m-1 && y == n-1)
       {
           return 1 ;
       }
        //  ch[x][y] = true ;
        if(dp[x][y] != -1)
        {
           return dp[x][y] ;
        }
       int ans = 0 ;
       for(auto &i:dr)
       {
           int p = x + i.first ;
           int q = y + i.second ;

           if(Safe(p,q,m,n))
           {
               ans +=   dfs(m,n,p,q) ;
           }
       }
       return dp[x][y] = ans ;


    }
    int uniquePaths(int m, int n) {
        
       // vector<vector<bool>>ch(m,vector<bool>(n,false)) ;
        memset(dp,-1,sizeof(dp)) ;
        int z = dfs(m,n,0,0) ;
        return z ;
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