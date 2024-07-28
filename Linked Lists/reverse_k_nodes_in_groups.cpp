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

    pair<ListNode*,ListNode*> f(ListNode* x,int k)
    {
        ListNode *ch = x ;

        int c = 0 ;
        while(c < k && ch != NULL)
        {
           ch = ch->next ;
           c++ ;
        }

        if(c < k)
        {
           return {x,NULL} ;
        }
        
        ListNode* prev = NULL ;
        ListNode* res = x ;
       
       c = 0 ;

        while(x != NULL && c < k)
        {
          
           ListNode* tmp = x->next ;
           x->next = prev ;
           prev = x ;
           x = tmp ;
           c++ ;
        }

       

        return {prev,res} ;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head->next == NULL)
        {
            return head ;
        }
        vector<pair<ListNode*,ListNode*>>v ;
        ListNode *x = head ;
        while(x != NULL)
        {
            ListNode *y = x ;
            int c = 0 ;
            while(c < k && y != NULL)
            {
               
                y = y->next ;
                c++ ;
            }
            pair<ListNode*,ListNode*>res = f(x,k) ;
            // cout<<res.first->val<<" "<<res.second->val<<" " ;
            v.push_back(res) ;

            x = y ;
           
            
            
        }

        ListNode *ans = NULL ;
        
       
        for(int i=0;i<v.size();i++)
        {
            if(ans == NULL)
            {
                ans = v[i].first ;
            }
            if(i + 1 == v.size())
            {
                break ;
            }
            v[i].second->next = v[i + 1].first ;
        }

        return ans ;


       
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