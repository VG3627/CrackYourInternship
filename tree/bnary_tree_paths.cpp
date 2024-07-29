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
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
right(right) {}
};

class Solution {
public:
    void f(TreeNode* root, vector<string>& ans, string s) {

        s += to_string(root->val);
        s += "->";

        if (root->left) {
            f(root->left, ans, s);
        }

        if (root->right) {
            f(root->right, ans, s);
        }

        if (root->left == NULL && root->right == NULL) {
            if (s.back() == '>') {
                s.pop_back();
                s.pop_back();
            }
            if (s.size() > 0) {
                ans.push_back(s);
                s.clear();
            }
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        f(root, ans, "");
        return ans;
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