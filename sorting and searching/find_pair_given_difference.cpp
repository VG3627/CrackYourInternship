//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        
        sort(arr.begin(),arr.end()) ;
        
        for(int i=0;i<n;i++)
        {
            auto it1 = lower_bound(arr.begin(),arr.end(),arr[i] - x) ;
            auto it2 = lower_bound(arr.begin(),arr.end(),arr[i] + x) ;
            
            if(it1 != --arr.begin() && it1 != arr.end() && *it1 + x == arr[i])
            {
                if(it1 - arr.begin() == i)
                {
                    continue ;
                }
                return 1 ;
            }
            if(it2 != --arr.begin() && it2 != arr.end() && *it2 - x == arr[i])
            {
                if(it2 - arr.begin() == i)
                {
                    continue ;
                }
                return 1 ;
            }
        }
        return -1 ;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int x;
        scanf("%d", &x);

        vector<int> arr(n);
        Array::input(arr, n);

        Solution obj;
        int res = obj.findPair(n, x, arr);

        cout << res << endl;
    }
}

// } Driver Code Ends