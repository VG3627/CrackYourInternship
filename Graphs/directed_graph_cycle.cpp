//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        queue<int>q ;
        vector<int>ind(V) ;
        
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<adj[i].size();j++)
            {
                ind[adj[i][j]]++ ;
            }
        }
        
        for(int i=0;i<V;i++)
        {
            if(ind[i] == 0)
            {
                q.push(i) ;
            }
        }
        int c = 0 ;
        while(!q.empty())
        {
            int x = q.front() ;
            q.pop() ;
            c++ ;
            
            for(auto &i:adj[x])
            {
                ind[i]-- ;
                if(ind[i] == 0)
                {
                    q.push(i) ;
                }
            }
        }
        
        return (c != V) ;
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends