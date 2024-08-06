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
class MyQueue {
public:
    stack<int>st ;
    MyQueue() {
       while(!st.empty())
       {
         st.pop() ;
       }
    }
    
    void push(int x) {
        stack<int>tmp ;
        while(!st.empty())
        {
            tmp.push(st.top()) ;
            st.pop() ;
        }
        st.push(x) ;
        while(!tmp.empty())
        {
            st.push(tmp.top()) ;
            tmp.pop() ;
        }
        return ;
    }
    
    int pop() {
        int x = st.top() ;
        st.pop() ;
        return x ;
    }
    
    int peek() {
        return st.top() ;
    }
    
    bool empty() {
        return st.empty() ;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
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
    cin>>t ;
    while(t--)
    {
        solve() ;
    }   
    return 0;
}