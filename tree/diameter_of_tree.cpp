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


    int f(TreeNode* root)
    {
        if(root == NULL)
        {
            return 0 ;
        }

        int x = 1 + f(root->left) ;
        int y = 1 + f(root->right) ;

        return max(x,y) ;
    }

    void f2(TreeNode* root,int &ans)
    {
        if(root == NULL)
        {
            return ;
        }

        f2(root->left,ans) ; 
        f2(root->right,ans) ; 

        ans = max(ans,f(root->left) + f(root->right)) ;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
       int ans = 0 ;
       f2(root,ans) ;

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