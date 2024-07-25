#include <bits/stdc++.h>
typedef long long ll;
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define vc vector<char>
#define PII pair<int, int>
#define mll map<long long, long long>
#define UMII unordered_map<int, int>
#define sz(a) a.size()
#define all(a) a.begin(), a.end()
#define ff first
#define ss second
#define endl "\n"
using namespace std;

class Solution
{
public:
    bool S(int i, int j, int n, int m)
    {
        return !(i < 0 || j < 0 || i >= n || j >= m);
    }

    vector<pair<int, int>> dr = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
    int f(vector<vector<char>> &board, int i, int j, int step, string &word, vector<vector<bool>> &ch)
    {
        int n = board.size();
        int m = board[0].size();

        if (step >= (int)word.size())
        {
            return 1;
        }
        ch[i][j] = 1;

        int ans = 0;

        for (auto &k : dr)
        {
            int u = k.first + i;
            int v = k.second + j;

            if (S(u, v, n, m) && ch[u][v] == false && board[u][v] == word[step])
            {

                ans |= f(board, u, v, step + 1, word, ch);
            }
        }
        ch[i][j] = 0;
        return ans;
    }
    bool exist(vector<vector<char>> &board, string word)
    {

        int n = board.size();
        int m = board[0].size();
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (board[i][j] == word[0])
                {
                    vector<vector<bool>> ch(n, vector<bool>(m, false));

                    ans |= f(board, i, j, 1, word, ch);
                }
            }
        }

        return ans;
    }
};
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    string s;
    cin >> s;
    Solution ans;
    cout << ans.exist(v, s) << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}