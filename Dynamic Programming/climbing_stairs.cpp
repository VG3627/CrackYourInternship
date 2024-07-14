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
int dp[50] ;
class Solution {
public:

    int climbStairs(int n) {
        if(n <= 2)
        {
            return n ;
        }
        if(dp[n] != 0)
        {
            return dp[n] ;
        }
        return dp[n] =  climbStairs(n-1) + climbStairs(n-2) ;


    }
};
void solve()
{
    int n ; cin>>n ;
    Solution ans ;
    cout<<ans.climbStairs(n)<<"\n" ;
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