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
int dp[1001][1001] ;
int ans = INT_MIN ;

class Solution {
public:

    int f(vector<int>&a,vector<int>&b,int i,int j)
    {
        if(i >= a.size() || j >= b.size())
        {
            return 0 ;
        }

        if(dp[i][j] != -1)
        {
            return dp[i][j] ;
        }
        int x = 0;
        if(a[i] == b[j])
        {
            x  = 1 + f(a,b,i+1,j+1) ;
        }
        
        f(a,b,i+1,j) ;
        f(a,b,i,j+1) ;

        ans = max(ans,x) ;
        return dp[i][j] = x ;

       


    }
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        
        memset(dp,-1,sizeof(dp)) ;
        ans = INT_MIN ;
        f(nums1,nums2,0,0) ;
        return ans ;
    }
};
void solve()
{
    int n,m ; cin>>n>>m ;
    vector<int>a(n) ; for(auto &temp:a) cin >> temp;
    vector<int>b(m) ; for(auto &temp:b) cin >> temp; 
    Solution ans ;
    cout<<ans.findLength(a,b)<<"\n" ;
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