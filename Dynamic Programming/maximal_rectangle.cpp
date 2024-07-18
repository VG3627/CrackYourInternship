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

    int f(vector<int>& v) {

        stack<int> s;
        int n = v.size();
        int ans = 0;
        vector<int> left, right;
        for (int i = 0; i < n; i++) {
            while (!s.empty() && v[s.top()] >= v[i]) { // next smaller element
                s.pop();
            }

            if (!s.empty()) {

                left.push_back(abs(s.top() - i) * v[i]);
            } else {

                left.push_back(v[i] * (i + 1));
            }

            s.push(i);
        }

        while (!s.empty()) {
            s.pop();
        }

        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && v[s.top()] >= v[i]) {
                s.pop();
            }

            if (!s.empty()) {
                right.push_back(abs(s.top() - i) * v[i]);
            } else {
                right.push_back(v[i] * (n - i));
            }

            

            s.push(i);
        }
        reverse(right.begin(), right.end());

        for (int i = 0; i < n; i++) {

            // cout<<left[i]<<" "<<right[i]<<"\n" ;
            ans = max(ans, left[i] + right[i] - v[i]);
        }

        return ans ;
    }
    int maximalRectangle(vector<vector<char>>& v) {
        
        int ans = 0 ;
        int n = v.size() ;
        int m = v[0].size() ;
        vector<int>a(m,0) ;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v[i][j] == '0')
                {
                    a[j] = 0 ;
                }
                else
                {
                    a[j]++ ;
                }
            }

            ans = max(ans,f(a)) ;
        }
        return ans ;


        

    }
};
void solve()
{
    int n,m ; cin>>n>>m ;
    vector<vector<char>>v(n,vector<char>(m)) ;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j] ;
        }
    }
    Solution ans ;
    cout<<ans.maximalRectangle(v)<<"\n" ;
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