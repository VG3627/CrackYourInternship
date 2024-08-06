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
class MyStack {
public:
    queue<int>q;
    MyStack() {
        while(!q.empty())
        {
            q.pop() ;
        }
    }
    
    void push(int x) {
        q.push(x) ;
        return ;
    }
    
    int pop() {
        int x = q.size() ;
        int z = q.back() ;
        while(x > 1)
        {
            int y = q.front() ;
            q.push(y) ;
            q.pop() ;
            x--;
        }
        q.pop() ;
        return z ;
    }
    
    int top() {
        return q.back() ;
    }
    
    bool empty() {
        // cout<<q.size()<<"\n" ;
        return (q.size() == 0) ;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
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