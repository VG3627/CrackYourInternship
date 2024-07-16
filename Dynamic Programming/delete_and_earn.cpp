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

int dp[20001] ;
class Solution {
public:

    int f(vector<int>&a,int i)
    {
        if(i >= a.size())
        {
            return 0 ;
        }

        if(dp[i] != -1)
        {
            return dp[i] ;
        }

        int idx = lower_bound(a.begin(),a.end(),a[i] + 1) - a.begin() - 1;
        int idx2 = lower_bound(a.begin(),a.end(),a[i] + 2) - a.begin() ;
        int res1 = (a[i] * (idx - i + 1)) + f(a,idx2) ;
        int res2 = f(a,idx + 1) ;
        return dp[i] = max(res1,res2) ;
    }
    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ;
        memset(dp,-1,sizeof(dp)) ;
        int ans = f(nums,0) ;
        return ans ;
    }
};
void solve()
{
    int n ; cin>>n ;
    vector<int>a(n) ; for(auto &temp:a) cin >> temp;
    Solution ans ;
    cout<<ans.deleteAndEarn(a)<<"\n" ;
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