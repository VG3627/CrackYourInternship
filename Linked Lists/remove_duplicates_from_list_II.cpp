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
    ListNode* deleteDuplicates(ListNode* head) {
        
        unordered_map<int,int>mp ;
        ListNode *x = head ;
        ListNode *z = head ;
        ListNode *prev = NULL ;
        while(x != NULL)
        {
           mp[x->val]++ ;
           x=x->next ;
        }

        while(z != NULL)
        {
            if(mp[z->val] > 1)
            {
                if(prev == NULL)
                {
                   head = head->next ;
                }
                else
                {
                    prev->next = z->next ;
                    
                }
                
            }
            else
            {
                prev = z ;
            }

            z = z->next ;
            
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