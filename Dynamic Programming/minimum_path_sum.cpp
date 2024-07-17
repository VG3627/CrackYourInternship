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
int dp[201][201] ;
class Solution {
public:
    

    int f(vector<vector<int>>& grid,int i,int j)
    {
        if(i == grid.size() - 1 && j == grid[0].size() - 1)
        {
            return grid[i][j] ;
        }

        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size())
        {
            return 1e9 ;
        }

        if(dp[i][j] != -1)
        {
            return dp[i][j] ;
        }

        return dp[i][j] = grid[i][j] + min(f(grid,i+1,j),f(grid,i,j + 1)) ;
    }
     
    int minPathSum(vector<vector<int>>& grid) {
        

        memset(dp,-1,sizeof(dp)) ;
        int ans = f(grid,0,0) ;
        return ans ;
    }
};
void solve()
{
    int n,m ; cin>>n>>m ;
    vector<vector<int>>v(n,vector<int>(m)) ;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j] ;
        }
    }

    Solution ans ;
    cout<<ans.minPathSum(v)<<"\n" ;
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