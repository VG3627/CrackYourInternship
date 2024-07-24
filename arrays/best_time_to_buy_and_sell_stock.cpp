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
 int dp[100001][3] ;
class Solution {
public:
    
   
    int f(vector<int>&a,int i,int ch)
    {
        if(ch == 2)
        {
            return 0 ;
        }
        if(i >= a.size())
        {
           return 0 ;
        }

        if(dp[i][ch] != -1)
        {
            return dp[i][ch] ;
        }

        if(ch == 0)
        {
            return dp[i][ch] = max(-1*a[i] + f(a,i + 1,1),f(a,i + 1,ch)) ;
        }
        else
        {
            return dp[i][ch] = max(a[i] + f(a,i + 1,2),f(a,i + 1,ch)) ;
        }
    }

    
    int maxProfit(vector<int>& a) {
        
        memset(dp,-1,sizeof(dp)) ;
        int ans = f(a,0,0) ;
        return ans ;
       
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
    cin>>t ;
    while(t--)
    {
        solve() ;
    }   
    return 0;
}