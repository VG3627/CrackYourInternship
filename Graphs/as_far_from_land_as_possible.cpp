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
    bool S(int i, int j, int n, int m) {
        if (i < 0 || j < 0 || i >= n || j >= m) {
            return false;
        }
        return true;
    }
    vector<pair<int, int>> dr = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int maxDistance(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();
        int dist[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                dist[i][j] = INT_MAX;
            }
        }
        queue<pair<int, pair<int, int>>> q;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                   
                    q.push({0, {i, j}});
                }
            }
        }

        while (!q.empty()) {
            int x = q.front().second.first;
            int y = q.front().second.second;
            int dis = q.front().first;
            q.pop();

            for (auto& i : dr) {
                int u = i.first + x;
                int v = i.second + y;

                if (S(u, v, n, m) && grid[u][v] == 0 && dist[u][v] > dis + 1) {
                    dist[u][v] = dis + 1;
                    q.push({dist[u][v], {u, v}});
                }
            }
        }

        int maxm = -1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 0) {
                    maxm = max(maxm, dist[i][j]);
                    //  cout<<dist[i][j]<<" " ;
                }
            }
            // cout<<"\n" ;
        }

        if (maxm == INT_MAX) {
            return -1;
        }

        return maxm;
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
    cout<<ans.maxDistance(grid)<<"\n" ;
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