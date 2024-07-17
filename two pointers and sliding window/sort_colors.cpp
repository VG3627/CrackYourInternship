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
    void sortColors(vector<int>& nums) {
        int  j = 0; 

        for(int i=0;i<nums.size();i++)
        {
            if(j >= nums.size())
            {
                break ;
            }
            if(nums[i] == 0)
            {
                swap(nums[i],nums[j]) ;
                j++ ;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(j >= nums.size())
            {
                break ;
            }
            if(nums[i] == 1)
            {
                swap(nums[i],nums[j]) ;
                j++ ;
            }
        }
    }
};
void solve()
{
    int n ; cin>>n ;
    vector<int>a(n) ; for(auto &temp:a) cin >> temp;
    Solution ans ;
    ans.sortColors(a) ;
    for (auto &i:a){
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