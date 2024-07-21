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
    int majorityElement(vector<int>& v) {
        int maj_ele = 0 ;
        int cnt = 0 ;

        for(int i=0;i<v.size();i++)
        {
            if(v[i] == maj_ele)
            {
                cnt++ ;
                continue ;
            }
            cnt-- ;
            if(cnt <= 0)
            {
              maj_ele = v[i] ;
              cnt = 1 ;
            }


            
        }
        
        return maj_ele ;

    }
};
void solve()
{
    int n ; cin>>n ;
    vector<int>a(n) ; for(auto &temp:a) cin >> temp;
    Solution ans ;
    cout<<ans.majorityElement(a)<<"\n" ;
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