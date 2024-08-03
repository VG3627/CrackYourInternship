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
    string addBinary(string a, string b) {
        int i = a.size() - 1, j = b.size() - 1;
        int carry = 0;
        string ret = "";
        while (i >= 0 || j >= 0 || carry != 0) {
            if (i >= 0) {
                carry += a[i] == '0' ? 0 : 1;
                i--;
            }
            if (j >= 0) {
                carry += b[j] == '0' ? 0 : 1;
                j--;
            }
            ret = ((carry % 2) == 0 ? "0" : "1") + ret;
            carry /= 2;
        }
        return ret;
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