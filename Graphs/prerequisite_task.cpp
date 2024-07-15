//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isPossible(int N,int P, vector<pair<int, int> >& pr) {
	    // Code here
	    vector<int>adj[N] ;
	    queue<int>q ;
	    vector<int>ind(N,0) ;
	    
	    for(int i=0;i<P;i++)
	    {
	        adj[pr[i].first].push_back(pr[i].second) ;
	        ind[pr[i].second]++ ;
	    }
	    
	    
	    
	    for(int i=0;i<N;i++)
	    {
	        if(ind[i] == 0)
	        {
	            q.push(i) ;
	        }
	    }
	    vector<bool>ch(N,false) ;
	    int c = 0 ;
	    while(!q.empty())
	    {
	        auto x = q.front() ;
	        q.pop() ;
	        ch[x] = 1 ;
	        c++ ;
	        
	        for(auto &i:adj[x])
	        {
	            ind[i]-- ;
	            if(ch[i] == false && ind[i] == 0)
	            {
	                q.push(i) ;
	                ch[i] = 1 ;
	            }
	        }
	    }
	    
	    return (c == N) ;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N,P, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}
// } Driver Code Ends