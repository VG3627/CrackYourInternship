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
    int largestRectangleArea(vector<int>& a) {


      

        int n = a.size() ;
        vector<int>left(n) ;
        vector<int>right(n) ;
        stack<int>s ;

        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && a[i] <= a[s.top()])
            {
                s.pop() ;
            }

            if(s.empty())
            {
                right[i] = n - i ;
            }
            else
            {
                right[i] = s.top() - i ;
            }
            s.push(i) ;
        }

        while(!s.empty())
        {
            s.pop() ;
        }

        for(int i=0;i<n;i++)
        {
            while(!s.empty() && a[i] <= a[s.top()])
            {
                s.pop() ;
            }

            if(s.empty())
            {
                left[i] = i + 1 ;
            }
            else
            {
                left[i] = i - s.top() ;
            }
            s.push(i) ;
        }
        int ans = 0 ;
        for(int i=0;i<n;i++)
        {
            ans = max(ans,(a[i] * (right[i] + left[i] - 1))) ;
        }
        return ans ;
    }
};
void solve()
{
    int n ; cin>>n ;
    vector<int>a(n) ; for(auto &temp:a) cin >> temp;
    Solution ans ;
    cout<<ans.largestRectangleArea(a)<<"\n" ;
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