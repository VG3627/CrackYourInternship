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
    vector<int> countBits(int n) {
        
         vector<int>ans ;
        for(int i=0;i<=n;i++)
        {
            ans.push_back(__builtin_popcount(i)) ;
        }
        return ans ;
    }
};
void solve()
{
    int n ; cin>>n ;

    Solution ans ;
    vector<int>res = ans.countBits(n) ;
    for (auto &i:res){
        cout << i << " ";
    }cout << "\n";
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