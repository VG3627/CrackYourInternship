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
    vector<int> dailyTemperatures(vector<int>& a) {
        int n = a.size() ;
        vector<int>ans(n,0) ;

        stack<int>s ;

        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && a[i] >= a[s.top()])
            {
                s.pop() ;
            }

            if(s.empty())
            {
                s.push(i) ;
                continue ;
            }

            ans[i] = s.top() - i ;
            s.push(i) ;
        }

        return ans ;
    }
};
void solve()
{
    int n ; cin>>n ;
    vector<int>a(n) ; for(auto &temp:a) cin >> temp;
    Solution ans ;
    vector<int>res = ans.dailyTemperatures(a) ;
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