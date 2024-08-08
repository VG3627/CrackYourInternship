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
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        

        vector<int>v ;
        for(int i=0;i<gas.size();i++)
        {
            v.push_back(gas[i] - cost[i]) ;
        }

        int i=0;
        int j=0;
        int n = v.size() ;
        int c = 0 ;
        while(i < 2 * n && j != i - n && j < n)
        {
        //    cout<<i<<" "<<j<<"\n" ;
           c += v[i % n] ;
           
           while(c < 0 && j <= i && j < n)
           {
            //   cout<<i<<" "<<j<<"\n" ;
              c -= v[j] ;
              j++ ;
           }
           i++ ;
        }
       
        return (j == n ? -1 : j) ;
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