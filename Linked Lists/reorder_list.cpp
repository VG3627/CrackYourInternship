#include <bits/stdc++.h>
typedef long long ll;
#define vi     vector <int>
#define vll    vector <long long>
#define vs     vector <string>
#define vc     vector <char>
#define PII    pair<int,int>
#define mll    map<long long,long long>
#define UMII   unordered_map<int,int>
// #define sz(a)  a.size()
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

    int sz(ListNode *x)
    {
        int c = 0 ;
        while(x != NULL)
        {
            x = x->next ;
            c++ ;
        }
        return c ;
    }
    void reorderList(ListNode* head) {
        
        int n = sz(head) ;
        int m = (n / 2) ;

        ListNode *a = head ;
        ListNode *b = head ;
        int i = 0 ;
        while(i < (m - (n % 2 == 0)))
        {
            b = b->next ;
            i++ ;
        }
        cout<<b->val<<"\n" ;
        ListNode *prev = NULL;
        while(b != NULL)
        {
            ListNode *temp = b->next ;
            b->next = prev ;
            prev = b ;
            b = temp ;
        }

    //    cout<<a->val<<" "<<prev->val<<"\n" ;
    //    return ;
        while(a != NULL && prev != NULL)
        {
            cout<<a->val<<" "<<prev->val<<"\n" ;
            ListNode *temp1 = a->next ;
            ListNode *temp2 = prev->next ;
            a->next = prev ;
            prev->next = temp1 ;
            a = temp1 ;
            prev = temp2 ;
        }



        return ;
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