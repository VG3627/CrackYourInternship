//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends


class twoStacks {
  public:
    vector<int>v;
    twoStacks() {
        v.clear() ;
        v.resize(201,-1) ;
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        for(int i=0;i<201;i+=2)
        {
            if(v[i] == -1)
            {
                v[i] = x ; break ;
            }
        }
        return ;
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        for(int i=1;i<201;i+=2)
        {
            if(v[i] == -1)
            {
                v[i] = x ; break ;
            }
        }
        return ;
    }

    // Function to remove an element from top of the stack1.
    int pop1() {
        for(int i=200;i>=0;i-=2)
        {
            if(v[i] != -1)
            {
                int x = v[i] ;
                v[i] = -1 ;
                return x ;
            }
        }
        return -1 ;
    }

    // Function to remove an element from top of the stack2.
    int pop2() {
        for(int i=199;i>=0;i-=2)
        {
            if(v[i] != -1)
            {
                int x = v[i] ;
                v[i] = -1 ;
                return x ;
            }
        }
        return -1 ;
    }
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    while (T--) {
        twoStacks *sq = new twoStacks();

        int Q;
        cin >> Q;
        while (Q--) {
            int stack_no;
            cin >> stack_no;
            int QueryType = 0;
            cin >> QueryType;

            if (QueryType == 1) {
                int a;
                cin >> a;
                if (stack_no == 1)
                    sq->push1(a);
                else if (stack_no == 2)
                    sq->push2(a);
            } else if (QueryType == 2) {
                if (stack_no == 1)
                    cout << sq->pop1() << " ";
                else if (stack_no == 2)
                    cout << sq->pop2() << " ";
            }
        }
        cout << endl;
    }
}

// } Driver Code Ends