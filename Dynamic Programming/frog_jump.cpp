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
int dp[2001][2001] ;
class Solution {
public:
    
    int f(vector<int>&v,int x,int k,unordered_map<int,int>&mp)
    {
        if(x == v.size() - 1)
        {
            return 1 ;
        }
        if(dp[x][k] != -1)
        {
            return dp[x][k] ;
        }
        int ans = 0 ;
        for(int j=max(k-1,1);j<=k+1;j++)
        {
            if(mp.count(v[x] + j) == 0)
            {
                continue ;
            }
           ans |= f(v,mp[v[x] + j],j,mp) ;
        }
        return dp[x][k] = ans ;
       
    }
    bool canCross(vector<int>& v) {

        unordered_map<int,int>mp ;
        for(int i=0;i<v.size();i++)
        {
            mp[v[i]] = i ;
        }
        memset(dp,-1,sizeof(dp)) ;
        int ans = f(v,0,0,mp) ;
        return ans;
    }
};
void solve()
{
    int n ; cin>>n ;
    vector<int>v(n) ; for(auto &temp:v) cin >> temp;
    Solution ans ;

    cout<<ans.canCross(v)<<"\n" ;
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