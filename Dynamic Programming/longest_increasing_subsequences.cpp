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
    int dp[2502][2502] ;
    int f(vector<int>&v,int i,int j)
    {
        if(i >= v.size())
        {
            return 0 ;
        }

        if(dp[i][j + 1] != -1)
        {
            return dp[i][j + 1] ;
        }

        if(j == -1)
        {
            return dp[i][j + 1] = max(1 + f(v,i + 1,i),f(v,i + 1,j)) ;
        }
        if(v[i] > v[j])
        {
            return dp[i][j + 1] = max(1 + f(v,i + 1,i),f(v,i + 1,j)) ;
        }
        return dp[i][j + 1] = f(v,i + 1,j) ;
    }
    int lengthOfLIS(vector<int>& v) {
        memset(dp,-1,sizeof(dp)) ;
        int ans = f(v,0,-1) ;
        return ans ;


    }
};
void solve()
{
    int n ; cin>>n ;
    vector<int>a(n) ; for(auto &temp:a) cin >> temp;
    Solution ans ;
    cout<<ans.lengthOfLIS(a)<<"\n" ;
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