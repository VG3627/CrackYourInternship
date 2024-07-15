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
    int trap(vector<int>& v) {
        

        vector<int>pf,sf ;
        int maxm = INT_MIN ;
        for(int i=0;i<v.size();i++)
        {
            maxm = max(maxm,v[i]) ;
            pf.push_back(maxm) ;
        }
        maxm = INT_MIN ;
        for(int i=v.size() - 1;i>=0;i--)
        {
            maxm = max(maxm,v[i]) ;
            sf.push_back(maxm) ;
        }

        reverse(sf.begin(),sf.end()) ;

        int ans = 0 ;

        for(int i=1;i<v.size() - 1;i++)
        {
            ans += min(sf[i],pf[i]) - v[i] ;
            // cout<<ans<<" "<<"\n" ;
        }

        return ans ;
    }
};
void solve()
{
    int n ; cin>>n ;
    vector<int>v(n) ; for(auto &temp:v) cin >> temp;
    Solution ans ; 
    cout<<ans.trap(v)<<"\n" ;
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