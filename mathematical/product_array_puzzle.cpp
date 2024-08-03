//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {

        // code here
        vector<long long>pf ;
        vector<long long>sf ;
        long long a,b ;
        a = b = 1 ;
        for(int i=0;i<nums.size();i++)
        {
            a *= nums[i] ;
            b *= nums[(int)nums.size() - 1 - i] ;
            pf.push_back(a) ;
            sf.push_back(b) ;
        }
        reverse(sf.begin(),sf.end()) ;
        
        vector<long long>ans ;
        for(int i=0;i<nums.size();i++)
        {
            long long x,y ;
            x = y = 1 ;
            
            if(i - 1 >= 0)
            {
                x = pf[i - 1] ;
            }
            if(i + 1 < nums.size())
            {
                y = sf[i + 1] ;
            }
            
            ans.push_back(x * y) ;
        }
        return ans ;
        
        
    }
};


//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends