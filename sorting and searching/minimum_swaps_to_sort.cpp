//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    
    void f(unordered_map<int,int>&mp,int x,unordered_set<int>&s,int &c)
    {
        s.insert(x) ;
        c++ ;
        
        if(s.count(mp[x]) == 0)
        {
            f(mp,mp[x],s,c) ;
        }
        return ;
    }
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    unordered_map<int,int>mp ;
	    vector<int>a = nums ;
	    sort(a.begin(),a.end()) ;
	    int c = 0 ;
	    for(int i=0;i<a.size();i++)
	    {
	        if(a[i] != nums[i])
	        {
	           mp[a[i]] = nums[i] ;
	        }
	    }
	    
	    unordered_set<int>s ;
	    int ans = 0 ;
	    for(auto &i:mp)
	    {
	        if(s.count(i.first) == 0)
	        {
	            c = 0 ;
	            f(mp,i.first,s,c) ;
	            ans += c - 1 ;
	        }
	    }
	    return ans ;
	    
	    
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends