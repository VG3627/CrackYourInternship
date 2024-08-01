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
    int subarraysDivByK(vector<int>& v, int k) {
        
        unordered_map<int,int>mp ;
        int c = 0 ;
        int ans = 0 ;
       
        for(int i=0;i<v.size();i++)
        {
            c += v[i] ;
            if((c >= 0 ? c % k : (c%k + k) % k) == 0)
            {
                ans++ ;
            }
            mp[(c >= 0 ? c % k : (c%k + k) % k)]++ ;
        }
        
        for(auto &i:mp)
        {
          
            ans += (i.second * (i.second - 1)) / 2 ;
            
        }
        return ans ;
    }
};
void solve()
{
    
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