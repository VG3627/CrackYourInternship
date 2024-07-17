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
    int characterReplacement(string s, int k) {

        int ans = 0 ; 
        for(char c = 'A' ; c <= 'Z' ; c++)
        {
            int i=0;
            int j=0;
            int x = k ;

            while(i < s.size())
            {
                if(s[i] != c)
                {
                    x-- ;
                }
                
                if(x >= 0)
                {
                   ans = max(ans,i - j + 1) ;
                }
                

                while(x < 0)
                {
                    if(j < s.size() && s[j] != c)
                    {
                        x++ ;
                    }
                    j++ ;
                }

                i++ ;
            }

        }

        return ans ;
    }
};
void solve()
{
    string s ; cin>>s ;
    int k ; cin>>k ;

    Solution ans ;
    cout<<ans.characterReplacement(s,k)<<"\n" ;
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