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
    
    bool S(int i,int j,int n,int m)
    {
        if(i < 0 || j < 0 || i >= n || j >= m)
        {
            return false ;
        }
        return true ;
    }
    vector<pair<int,int>>dr = {{0,1},{1,0},{-1,0},{0,-1}} ;
    void dfs(vector<vector<char>>& grid,int x,int y,vector<vector<bool>>&ch)
    {
        ch[x][y] = 1 ;
        
        for(auto &i:dr)
        {
            int u = i.first + x ;
            int v = i.second + y ;
            if(S(u,v,grid.size(),grid[0].size()) && !ch[u][v] && grid[u][v] == '1')
            {
                dfs(grid,u,v,ch) ;
            }
        }
        return ;
    }
    int numIslands(vector<vector<char>>& grid) {
        

        int ans = 0 ;
        int n = grid.size() ;
        int m = grid[0].size() ;
        vector<vector<bool>>ch(n,vector<bool>(m,false)) ;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(ch[i][j] == false && grid[i][j] == '1')
                {
                    ans++ ;
                    dfs(grid,i,j,ch) ;
                }
            }
        }
        return ans ;
    }
};
void solve()
{
    int n,m,i,j,c=0 ; cin>>n>>m ;
    vector<vector<char>>grid(n,vector<char>(m)) ;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>grid[i][j] ;
        }
    }

    Solution ans ;

    cout<<ans.numIslands(grid)<<"\n" ;
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