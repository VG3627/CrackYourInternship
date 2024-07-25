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
        return !(i < 0 || j < 0 || i >= n || j >= m ) ;
    }
    vector<pair<int,int>>dr = {{0,1},{1,0},{0,-1},{-1,0}} ;
    void dfs(vector<vector<int>>& grid,int x,int y)
    {
        int n = grid.size() ;
        int m = grid[0].size() ;
        grid[x][y] = 2 ;
        
        for(auto &i:dr)
        {
            int u = i.first + x ;
            int v = i.second + y ;

            if(S(u,v,n,m) && grid[u][v] == 1)
            {
                dfs(grid,u,v) ;
            }
        }
    }
    int shortestBridge(vector<vector<int>>& grid) {
        

        int n = grid.size() ;
        int m = grid[0].size() ;
        int flg = 1 ;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == 1)
                {
                    flg= 0 ;
                    dfs(grid,i,j) ;
                    break ;
                }
            }
            if(!flg)
            {
                break ;
            }
        }

        queue<pair<pair<int,int>,int>>q ;
        vector<vector<bool>>ch(n,vector<bool>(m,false)) ;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == 2)
                {
                    q.push({{i,j},0}) ;
                }
            }
        }
        int ans = INT_MAX  ;
        while(!q.empty())
        {
            int x = q.front().first.first ;
            int y = q.front().first.second ;
            int d = q.front().second ;
            q.pop() ;
            ch[x][y] = 1 ;

            if(grid[x][y] == 1)
            {
                ans = min(ans,d) ;
            }
            
            for(auto &i:dr)
            {
                int u = i.first + x ;
                int v = i.second + y ;

                if(S(u,v,n,m) && !ch[u][v] && grid[u][v] != 2)
                {
                    ch[u][v] = 1 ;
                    q.push({{u,v},d + 1}) ;
                }
            }

        }

        return ans - 1 ;
    }
};
void solve()
{
    int n,m ; cin>>n>>m ;
    vector<vector<int>>grid(n,vector<int>(m)) ;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           cin>>grid[i][j] ;
        }
    }

    Solution ans ;
    cout<<ans.shortestBridge(grid)<<"\n" ;
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