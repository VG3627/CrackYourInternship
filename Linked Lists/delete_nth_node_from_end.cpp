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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz = 0 ;

        ListNode *temp = head ;
        while(temp != NULL)
        {
            sz++ ;
            temp = temp->next;
        }
        int x = sz - n + 1 ;

        if(x == 1)
        {
            head = head->next ;
            return head ;
        }
        if(x == sz)
        {
            ListNode *curr = head ;
            while(curr->next->next != NULL)
            { 
               curr = curr->next ;
            }
            curr->next = NULL ;
            return head;
        }
        ListNode *follow = head ;
        ListNode *prev = head ;
        int i = 1;
        while(i != x - 1)
        {
            prev = prev->next ;
            i++ ;
        }
        i=1;
        while(i != x + 1)
        {
            follow = follow->next ;
            i++ ;
        }
        // cout<<prev->val<<" "<<"\n" ;
         prev->next = follow ;
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