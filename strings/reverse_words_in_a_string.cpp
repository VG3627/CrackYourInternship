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
    string reverseWords(string s) {
        vector<string> v;

        string r;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                r.push_back(s[i]);
            } else {
                if (r.size() > 0) {
                    v.push_back(r);
                    r.clear();
                }
            }
        }
        if (r.size() > 0) {
            v.push_back(r);
            r.clear();
        }
        reverse(v.begin(), v.end());

        string ans;
        for (int i = 0; i < v.size(); i++) {
            ans += v[i];
            ans += ' ';
        }
        ans.pop_back() ;
        return ans;
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