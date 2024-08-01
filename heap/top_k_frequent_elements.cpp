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
    vector<int> topKFrequent(vector<int>& v, int k) {
        

        unordered_map<int,int>mp ;

        for(int i=0;i<v.size();i++)
        {
            mp[v[i]]++ ;
        }

        priority_queue<pair<int,int>>q ;

        for(auto &i:mp)
        {
            q.push({i.second,i.first}) ;
        }

        vector<int>ans ;
        for(int i=0;i<k;i++)
        {
            if(!q.empty())
            {
                ans.push_back(q.top().second) ;
                q.pop() ;
            }
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