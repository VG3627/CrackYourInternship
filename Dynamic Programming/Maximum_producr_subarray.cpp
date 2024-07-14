
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
    long long M = 1e12 + 7 ;
    int maxProduct(vector<int>& nums) {
        long long maxm = LONG_LONG_MIN ;
        long long c = 1 ;

        for(int i=0;i<nums.size();i++)
        {
           c *= nums[i] ;
           c %= M ;
           maxm = max(maxm,c) ;
           if(c == 0)
           {
             c = 1 ;
           }
        }
        c = 1 ;
        for(int i=nums.size() - 1;i >= 0;i--)
        {
           c *= nums[i] ;
           c %= M ;
           maxm = max(maxm,c) ;
           if(c == 0)
           {
             c = 1 ;
           }
        }

        return maxm ;
    }
};

void solve()
{
    int n ; cin>>n ;
    Solution ans ;
    vector<int>v(n) ; for(auto &temp:v) cin >> temp;
    cout<<ans.maxProduct(v)<<"\n" ;
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