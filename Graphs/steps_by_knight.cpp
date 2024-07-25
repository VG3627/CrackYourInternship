//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
    bool isSafe(int i,int j,int n)
    {
        if(i < 0 || j < 0 || i >= n || j >= n)
        {
            return false ;
        }
        return true ;
    }
	int minStepToReachTarget(vector<int>&k,vector<int>&t,int n)
	{
	    queue<pair<pair<int,int>,int>>q ;
	    vector<vector<bool>>ch(n,vector<bool>(n,false)) ;
	    q.push({{k[0]-1,k[1]-1},0}) ;
	    t[0] = t[0] - 1 ;
	    t[1] = t[1] - 1 ;
	    vector<pair<int,int>> v = {{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}} ;
	    while(q.empty()==0)
	    {
	        int a = q.front().first.first ;
	        int b = q.front().first.second ;
	        int steps = q.front().second ;
	        q.pop() ;
	        if(ch[a][b] == 1)
	        {
	            continue ;
	        }
	        ch[a][b] = 1 ;
	        if(a == t[0] && b == t[1])
	        {
	            return steps ;
	        }
	        for(auto &i:v)
	        {
	            int x = a + i.first ;
	            int y = b + i.second ;
	            if(isSafe(x,y,n) && ch[x][y] == 0)
	            {
	                q.push({{x,y},steps+1}) ;
	            }
	        }
	        
	    }
	    return -1 ;
	    
	}
};



//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends