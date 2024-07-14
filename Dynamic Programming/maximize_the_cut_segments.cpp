//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends

int dp[10001] ;
class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int f(int n,int x,int y,int z)
    {
        if(n == 0)
        {
            return 0 ;
        }
        if(n < 0)
        {
            return -1e9 ;
        }
        if(dp[n] != -1)
        {
            return dp[n] ;
        }
        
        return dp[n] = 1 + max({f(n - x,x,y,z),f(n - y,x,y,z),f(n - z,x,y,z)}) ;
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        memset(dp,-1,sizeof(dp)) ;
        int ans = f(n,x,y,z) ;
        return max(ans,0) ;
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends