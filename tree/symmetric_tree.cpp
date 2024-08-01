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

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:

    void f(TreeNode* root,map<int,vector<int>>&v)
    {
        queue<pair<int,TreeNode*>>q ;
        q.push({0,root}) ;
        int i = 0 ;
        while(!q.empty())
        {
          
          pair<int,TreeNode*>x = q.front() ;
          
          q.pop() ;

          v[x.first].push_back(x.second == NULL ? -101:x.second->val) ;

          if(x.second == NULL)
          {
            continue ;
          }

          q.push({x.first + 1,x.second->left == NULL ? NULL : x.second->left}) ;
          q.push({x.first + 1,x.second->right == NULL ? NULL : x.second->right}) ;


        }
    }
    bool isSymmetric(TreeNode* root) {
        
        int c = 0 ;
        if(root->left == NULL)
        {
            c++ ;
        }
        if(root->right == NULL)
        {
            c++ ;
        }

        if(c == 2)
        {
            return true ;
        }

        if(c == 1)
        {
            return false ;
        }


        map<int,vector<int>>v1,v2 ;

        f(root->left,v1) ;
        f(root->right,v2) ;

        for(auto &i:v1)
        {
            vector<int>a = i.second ;
            vector<int>b = v2[i.first];

            reverse(b.begin(),b.end()) ;
            // for(auto &i:b)
            // {
            //     cout<<i<<" " ;
            // }
            // cout<<"\n" ;
            // for(auto &i:a)
            // {
            //     cout<<i<<" " ;
            // }
            // cout<<"\n" ;
            if(a != b)
            {
                return false ;
            }
        }

        return true ;




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