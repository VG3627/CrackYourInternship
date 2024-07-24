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
class NumMatrix {
public:

    vector<vector<int>>row ;
    vector<vector<int>>col ;
    NumMatrix(vector<vector<int>>& matrix) {
        int c = 0 ;
        row.clear() ;
        col.clear() ;
        int n = matrix.size() ;
        int m = matrix[0].size() ;
        for(int i=0;i<n;i++)
        {
            vector<int>tmp ;
            c = 0 ;
            for(int j=0;j<m;j++)
            {
                c += matrix[i][j] ;
                tmp.push_back(c) ;
            }
            row.push_back(tmp) ;
        }
        for(int i=0;i<n;i++)
        {
            vector<int>tmp ;
           
            for(int j=0;j<m;j++)
            {
   
                tmp.push_back(-1) ;
            }
            col.push_back(tmp) ;
    
        }
        for(int j=0;j<m;j++)
        {
           
            c = 0 ;
            for(int i=0;i<n;i++)
            {
               c += row[i][j] ;
               col[i][j] = c ;
            }
    
        }
        
    //       for(int i=0;i<n;i++)
    //     {
            
           
    //         for(int j=0;j<m;j++)
    //         {
   
    //            cout<<col[i][j]<<" " ;
    //         }
    //         cout<<"\n" ;
    
    //     }
    //    cout<<"\n" ;




    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int x1 = row1 - 1 ;
        int y1 = col2 ;
        int x2 = row1 - 1 ;
        int y2 = col1 - 1 ;
        int x3 = row2 ;
        int y3 = col1 - 1 ;


        int ans = col[row2][col2] ;
        // cout<<ans<<" " ;
        ans += ((x2 >= 0 && y2 >= 0) ? col[x2][y2] : 0) ;
        // cout<<ans<<" " ;
        ans -= ((x1 >= 0 && y1 >= 0) ? col[x1][y1] : 0) ;
        // cout<<ans<<" " ;
        ans -= ((x3 >= 0 && y3 >= 0) ? col[x3][y3] : 0) ;
        // cout<<ans<<"\n" ;
        return ans ;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
void solve()
{
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t ;
    t=1 ;
    while(t--)
    {
        solve() ;
    }   
    return 0;
}