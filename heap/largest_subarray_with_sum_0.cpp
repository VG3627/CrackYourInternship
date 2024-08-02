//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        // Your code here
        
        unordered_map<int,int>mp ;
        int ans = 0 ;
        int c = 0 ;
        for(int i=0;i<arr.size();i++)
        {
            c += arr[i] ;
            if(c == 0)
            {
                ans = max(ans,i + 1) ;
            }
            
            if(mp.count(c))
            {
                ans = max(ans,i - mp[c]) ;
            }
            
            if(mp.count(c) == 0)
            {
                mp[c] = i ;
            }
        }
        
        return ans ;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i) {
            cin >> array1[i];
        }
        Solution ob;
        cout << ob.maxLen(array1, m) << endl;
    }
    return 0;
}

// } Driver Code Ends