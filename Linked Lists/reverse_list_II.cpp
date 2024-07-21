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
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>v ;
        ListNode* x = head ;
        int i = 1 ;
        while(x != NULL)
        {
           if(i >= left && i <= right)
           {
            v.push_back(x->val) ;
           }
           x = x->next ;
           i++ ;
        }
        ListNode *y = head ;
        i = 1 ;
        int j = v.size() - 1 ;
        while(y != NULL)
        {
            if(i >= left && i <= right)
            {
                y->val = v[j] ;
                j-- ;
            }
            y = y->next ;
            i++ ;
        }
        return head ;
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