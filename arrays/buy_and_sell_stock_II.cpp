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
    int maxProfit(vector<int>&a) {


        int ans = 0 ;
        int minm = INT_MAX ;
        for(int i=0;i<a.size();i++)
        {
            // cout<<minm<<" "<<a[i]<<"\n" ;
           if(a[i] > minm)
           {
              ans += a[i] - minm ;
              minm = INT_MAX ;
           }

           minm = min(minm,a[i]) ;


        }

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
    t=1 ;
    while(t--)
    {
        solve() ;
    }   
    return 0;
}