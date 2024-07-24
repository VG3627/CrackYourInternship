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
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j ;
      
        vector<pair<int,int>>v ;
        for(i=0;i<nums.size();i++)
        {
            v.push_back({nums[i],i}) ;
        }
        i = 0 ;
        j = nums.size() - 1 ;
        sort(v.begin(),v.end()) ;
        while(i < j)
        {
            if(v[i].first + v[j].first == target)
            {
                return {v[i].second,v[j].second} ;
            }
            else if(v[i].first + v[j].first > target)
            {
                j-- ;
            }
            else
            {
                i++ ;
            }
        }
        return {-1,-1} ;
    }
};
void solve()
{
    int n,k ; cin>>n>>k ;
    vector<int>a(n) ; for(auto &temp:a) cin >> temp;
    Solution ans ;
    vector<int>res = ans.twoSum(a,k) ;
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
    cin>>t ;
    while(t--)
    {
        solve() ;
    }   
    return 0;
}