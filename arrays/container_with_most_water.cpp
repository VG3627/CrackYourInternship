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

    
    int maxArea(vector<int>& a) {
        

        int i = 0 ;
        int j = a.size() - 1 ;
        
        int ans = 0 ;
        while(i < j)
        {
          ans = max(ans,min(a[i],a[j]) * (j - i)) ;

          if(a[i] >= a[j])
          {
            j-- ;
          }
          else
          {
            i++ ;
          }
        
           
            
            // cout<<i <<" "<<j<<" "<<ans<<"\n" ;
          
        }

        return ans ;
      
    }
};
void solve()
{
    int n ; cin>>n ;
    vector<int>a(n) ; for(auto &temp:a) cin >> temp;
    Solution ans ;
    cout<<ans.maxArea(a)<<"\n" ; 
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