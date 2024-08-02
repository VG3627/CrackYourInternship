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
    vector<vector<int>> threeSum(vector<int>& a) {
       
       int n = a.size() ;
      
       sort(a.begin(),a.end()) ;
       set<vector<int>>s ;
       for(int i=0;i<n-2;i++)
       {
          int j = i + 1;
          int k = n - 1;

          while(j < k)
          {
            if(a[j] + a[k] + a[i] > 0)
            {
                k-- ;
            }
            else if(a[j] + a[k] + a[i] < 0)
            {
                j++ ;
            }
            else
            {
                s.insert({a[i],a[j],a[k]}) ;
                j++ ;
            }
          }

       }
        vector<vector<int>>ans(s.begin(),s.end()) ;
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