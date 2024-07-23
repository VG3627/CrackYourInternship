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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *ans = new ListNode(-1);
        ListNode *res = ans ;
        int c = 0 ;
        while(l1 != NULL || l2 != NULL)
        {
            int x,y ;
            x=y=0 ;

            if(l1 != NULL)
            {
               x = l1->val ;
               l1 = l1 -> next ;
            }
            if(l2 != NULL)
            {
                y = l2->val ;
                l2 = l2 -> next ;
            }

            if((x + y + c) == (x + y + c) % 10)
            {
                ListNode *tmp = new ListNode(x + y + c) ;
                c = 0 ;
                res->next = tmp ;
                res = res -> next ;
            }
            else
            {
                
                ListNode *tmp = new ListNode((x + y + c) % 10) ;
                c = 1 ;
                res->next = tmp ;
                res = res -> next ;
            }
        }
        if(c > 0)
        {
            ListNode *tmp = new ListNode(1) ;
            
            res->next = tmp ;
            res = res -> next ;
        }
        return ans->next ;

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