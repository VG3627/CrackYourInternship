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
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        
        vector<int>ans ;
        int i=0,j=0 ;
        while(i < m && j < n)
        {
            if(a[i] <= b[j])
            {
                ans.push_back(a[i]) ;
                i++ ;
            }
            else
            {
                ans.push_back(b[j]) ;
                j++ ;
            }
        }

        if(i == m)
        {
            for(;j<n;j++)
            {
                ans.push_back(b[j]) ;
            }
        }
        if(j == n)
        {
            for(;i<m;i++)
            {
                ans.push_back(a[i]) ;
            }
        }
        a = ans ;
        b = ans ;
        // return ans ;
        return ;
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