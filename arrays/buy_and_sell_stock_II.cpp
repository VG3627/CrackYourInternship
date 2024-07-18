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
int dp[30001][2] ;
class Solution {
public:
    
    int recur(vector<int>& a,int i,int flg)
    {
        if(i >= a.size())
        {
            return 0 ;
        }
        if(dp[i][flg] != -1)
        {
            return dp[i][flg] ;
        }
        if(flg == 0)
        {
            return dp[i][flg] = max(recur(a,i+1,flg),-1*a[i] + recur(a,i+1,flg^1)) ;
        }
        else
        {
            return dp[i][flg] = max(recur(a,i+1,flg),a[i] + recur(a,i+1,flg^1)) ;
        }

    }
    int maxProfit(vector<int>& a) {
        
        memset(dp,-1,sizeof(dp)) ;
        int z = recur(a,0,0) ;
        return z ;
    }
};
void solve()
{
    int n ; cin>>n ;
    vector<int>a(n) ; for(auto &temp:a) cin >> temp;
    Solution ans ;
    cout<<ans.maxProfit(a)<<"\n" ;
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