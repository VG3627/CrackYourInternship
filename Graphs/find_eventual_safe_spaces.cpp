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
    vector<int> eventualSafeNodes(vector<vector<int>>& v) {
        
       int n = v.size() ;
       vector<int>adj[n] ;
       vector<int>deg(n,0) ;

       queue<int>q ;
       vector<int>ans ;
       for(int i=0;i<n;i++)
       {
        for(auto &j:v[i])
        {
            adj[j].push_back(i) ;
        }

        deg[i] = v[i].size() ;
        if(deg[i] == 0)
        {
            q.push(i) ;
        }

       }

       while(!q.empty())
       {
        int x = q.front() ;
        q.pop() ;
        ans.push_back(x) ;

        for(auto &i:adj[x])
        {
            deg[i]-- ;

            if(deg[i] == 0)
            {
                q.push(i) ;
            }
        }
       }

       sort(ans.begin(),ans.end()) ;
       return ans ;



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