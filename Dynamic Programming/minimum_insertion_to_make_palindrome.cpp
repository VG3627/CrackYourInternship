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
int dp[501][501] ;
class Solution {
public:

    int f(string &r,string &s,int i,int j)
    {
        if(i >= r.size() || j >= s.size())
        {
            return 0 ;
        }

        if(dp[i][j] != -1)
        {
            return dp[i][j] ;
        }

        if(r[i] == s[j])
        {
            return dp[i][j] = 1 + f(r,s,i+1,j+1) ;
        }

        return dp[i][j] = max(f(r,s,i+1,j),f(r,s,i,j+1)) ;
    }
    int minInsertions(string s) {
        string r = s ;
        reverse(r.begin(),r.end()) ;
        memset(dp,-1,sizeof(dp)) ;
        int res = f(r,s,0,0) ;

        int ans = s.size() - res ;
        return ans ; 

    }
};
void solve()
{
    string s ; cin>>s ;
    Solution ans ;
    cout<<ans.minInsertions(s)<<"\n" ;
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