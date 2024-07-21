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
  
    bool canJump(vector<int>& a) {
        

        int n = a.size() ;
       vector<int>ans(n,0) ;
       int z = 0 ;
       for(int i=0;i<n;i++)
       {
        if(i <= z)
        {
          z = max(z,i + a[i]) ;
          ans[i] = 1 ;
        }
       } 

       return (ans[n - 1] == 1) ;


    }
};
void solve()
{
    int n ; cin>>n;
    vector<int>a ; for(auto &temp:a) cin >> temp;
    Solution ans ;
    cout<<ans.canJump(a)<<"\n" ;
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