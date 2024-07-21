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

    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *ans = new ListNode() ; 
        ListNode *x = ans ;
        

        
        int c = 1 ;
        // sort(lists.begin(),lists.end(),comp) ;
        vector<int>v ;
        while(c)
        {
            c = 0 ;
           for(int j=0;j<lists.size();j++)
           {
            if(lists[j] != NULL)
            {
                c = 1 ;
              v.push_back(lists[j]->val) ;
              lists[j] = lists[j]->next ;
            }
           }
        }
        
        sort(v.begin(),v.end()) ;
        for(int i=0;i<v.size();i++)
        {
            ListNode *res = new ListNode(v[i]) ;
            ans->next = res ;
            ans = ans->next ;
        }
        
        return x->next ;

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