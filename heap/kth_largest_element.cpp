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
    int findKthLargest(vector<int>& v, int k) {


        priority_queue<int>q ;
        for(int i=0;i<v.size();i++)
        {
            q.push(v[i]) ;
        }

       

       

        
        for(int i=0;i<k - 1;i++)
        {
            if(!q.empty())
            {
               
                q.pop() ;
            }
        }
        return q.top() ;
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