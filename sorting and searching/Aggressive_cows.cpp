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

bool f(vector<int>&a,int x,int cnt)
{
    int n = a.size() ;
    int prev = -1e9 ;
    for(int i=0;i<n;i++)
    {
       if(a[i] - prev >= x)
       {
           prev = a[i] ;
           cnt-- ;
       }
    }

    return (cnt <= 0) ;
}
void solve()
{
    int n,c,i,j,d=0 ; cin>>n>>c ;
    vector<int>a(n) ; for(auto &temp:a) cin >> temp;
    sort(all(a)) ; 
    

    int l = 0 ;
    int h = 1e12 ;
    int ans = l ;
    while(l <= h)
    {
        int m = l + ((h - l) / 2) ;

        if(f(a,m,c))
        {
            ans = m ;
            l = m + 1 ;
        }
        else
        {
            h = m - 1 ;
        }
    }

    cout<<ans<<"\n" ;
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