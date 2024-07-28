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
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        vector<vector<string>>ans ;
        unordered_map<string,vector<string>>mp ;
        
        for(int i=0;i<s.size();i++)
        {
            string r = s[i] ;
            sort(r.begin(),r.end()) ;
            mp[r].push_back(s[i]) ;
        }

        for(auto &i:mp)
        {
            ans.push_back(i.second) ;
        }
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