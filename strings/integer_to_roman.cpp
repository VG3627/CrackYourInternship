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
    vector<pair<char,int>>mp = {{'M',1000},{'D', 500}, {'C', 100}, {'L', 50}, {'X', 10},{'V', 5}, {'I', 1}}  ;
    string intToRoman(int nums) {
        
        string ans ;
        while(nums > 0)
        {
          
            cout<<nums<<" " ;
            for(int i=0;i<mp.size();i++)
            {
                if(nums >= mp[i].second)
                {
                    string r = to_string(nums) ;
                    if((r[0] == '4' || r[0] == '9') && i - 1 >= 0)
                    {
                        char s = mp[i - 1].first ;
                        if(s == 'M')
                        {
                            ans += "CM" ;
                            nums -= 900 ;
                        }
                        else if(s == 'D')
                        {
                           ans += "CD" ;
                           nums -= 400 ;
                        }
                        else if(s == 'C')
                        {
                            ans += "XC" ;
                            nums -= 90 ;
                        }
                        else if(s == 'L')
                        {
                            ans += "XL" ;
                            nums -= 40 ;
                        }
                        else if(s == 'X')
                        {
                            ans += "IX" ;
                            nums -= 9 ;
                        }
                        else if(s == 'V')
                        {
                           ans += "IV" ;
                           nums -= 4 ;
                        }
                       break ;
                    }
                    int x = nums / mp[i].second ;
                    nums -= (x * mp[i].second) ;
                    while(x--)
                    {
                        ans.push_back(mp[i].first) ;
                    }
                    break ;
                }
            }
            
        }
        cout<<nums<<"\n" ;
        return ans ;
        
    }
};
void solve()
{
    int n ; cin>>n ;
    Solution ans ;
    cout<<ans.intToRoman(n)<<"\n" ;
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