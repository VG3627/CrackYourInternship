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
        if(i < 0 || j < 0 ||i >= n || j>= m)
        {
            return false ;
        }
        return true ;
    }
    vector<pair<int,int>>dr = {{0,1},{0,-1},{-1,0},{1,0},{1,1},{1,-1},{-1,1},{-1,-1}} ;
    void gameOfLife(vector<vector<int>>& v) {
        

        int n = v.size() ;
        int m = v[0].size() ;
        vector<vector<int>>a = v ;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                
                int c = 0 ;
                for(auto &k:dr)
                {
                    int u = i + k.first ;
                    int w = j + k.second ;

                    if(S(u,w,n,m) == false)
                    {
                        continue ;
                    }

                    c += (v[u][w] == 1) ;
                }

                if(v[i][j] == 1)
                {
                    if(c < 2)
                    {
                        a[i][j] = 0 ;
                        continue ;
                    }

                    if(c < 4)
                    {
                        continue ;
                    }

                    a[i][j] = 0 ; continue ;
                }
                else
                {
                    if(c == 3)
                    {
                        a[i][j] = 1 ;
                        continue ;
                    }
                }
            }
        }

        v = a ;
        return  ;
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
    ans.gameOfLife(v) ;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<v[i][j]<<" " ;
            
        }
        cout<<"\n" ;
    }
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