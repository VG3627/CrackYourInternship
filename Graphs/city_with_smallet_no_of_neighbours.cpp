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

    int bfs(vector<pair<int,int>>adj[],int x,int t,int n)
    {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q ;
        
        vector<int>dis(n,INT_MAX) ;
        q.push({0,x}) ;
        int ans = 0 ;
        while(!q.empty())
        {
            auto a = q.top() ;

            q.pop() ;
    
           
            for(auto &i:adj[a.second])
            {
               if(dis[i.first] > i.second + a.first)
               {
                dis[i.first] = i.second + a.first ;
                q.push({dis[i.first],i.first}) ;
               }
            }


        }
        
        for(int i=0;i<n;i++)
        {
            
            if(dis[i] <= t && i != x)
            {
                // cout<<i<<" " ; 
                ans++ ;
            }

        }
        // cout<<"\n" ;
        return ans ;
    }
    int findTheCity(int n, vector<vector<int>>& edges, int x) {
        

        vector<pair<int,int>>adj[n] ;

        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back({edges[i][1],edges[i][2]}) ;
            adj[edges[i][1]].push_back({edges[i][0],edges[i][2]}) ;
        }
        
        int minm = INT_MAX ;
        int idx = -1 ;
        for(int i=0;i<n;i++)
        {
           
           
           int res = bfs(adj,i,x,n) ;
        //    cout<<i<<" "<<res<<"\n" ;
           if(res <= minm)
           {
            minm = res ;
            idx = i ;
           }
           
        }
        return idx ;
    }
};
void solve()
{
    int n,m,x ; cin>>n>>m>>x ;
    vector<vector<int>>v ;
    for(int i=0;i<m;i++)
    {
        int a,b,c ; cin>>a>>b>>c ;
        vector<int>temp = {a,b,c} ;
        v.push_back(temp) ;
    }

    Solution ans ;

    cout<<ans.findTheCity(n,v,x)<<"\n" ;
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