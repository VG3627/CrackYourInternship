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

    void f(vector<int>adj[],int x,vector<bool>&ch)
    {
        ch[x] = 1 ;

        for(auto &i:adj[x])
        {
            if(!ch[i])
            {
                f(adj,i,ch) ;
            }
        }
        return ;
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        
        if(connections.size() < n - 1)
        {
            return -1 ;
        }

        vector<int>adj[n] ;
        vector<bool>ch(n,false) ;
        for(int i=0;i<connections.size();i++)
        {
            adj[connections[i][0]].push_back(connections[i][1]) ;
            adj[connections[i][1]].push_back(connections[i][0]) ;
        }

        int ans = 0;
        for(int i=0;i<n;i++)
        {
            if(!ch[i])
            {
                f(adj,i,ch) ;
                ans++ ;
            }
        }
        return ans - 1 ;


      
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