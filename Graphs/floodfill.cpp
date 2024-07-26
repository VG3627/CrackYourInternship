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
        return !(i < 0|| j < 0 || i >= n || j >= m) ;
    }

    vector<pair<int,int>>dr = {{0,1},{1,0},{-1,0},{0,-1}} ;
    void f(vector<vector<int>>& image,int x,int y,int color,int z, vector<vector<bool>>&ch)
    {
       image[x][y] = color ;
       ch[x][y] = 1  ;
       int n = image.size() ;
       int m = image[0].size() ;
       for(auto &i:dr)
       {
          int u = x + i.first ;
          int v = y + i.second ;
          if(S(u,v,n,m) &&  ch[u][v] == false && image[u][v] == z)
          {
              f(image,u,v,color,z,ch) ;
          }
       }

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
         int n = image.size() ;
       int m = image[0].size() ;
        vector<vector<bool>>ch(n,vector<bool>(m,false)) ;
        f(image,sr,sc,color,image[sr][sc],ch) ;
        
        return image ;
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