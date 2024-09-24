// Given a Queue data structure that supports standard operations 
// like enqueue() and dequeue(). 
// The task is to implement a Stack data structure using Queue.
#include<bits/stdc++.h>
using namespace std;
class Stack{
    queue<int> q1,q2;
    public: 
    void pop(){
        if(q1.empty())
        return;
    while(q1.size()!=1){
        q2.push(q1.front());
        q1.pop();
    }
    q1.pop();
    queue<int> q=q1;
    q1=q2;
    q2=q;
    }
    void push(int x){
    q1.push(x);
    }
    int top(){
        if(q1.empty())
        return -1;
    while(q1.size() != 1){
        q2.push(q1.front());
        q1.pop();
        }
        int temp = q1.front();
        q1.pop();
        q2.push(temp);
        queue<int> q = q1;
        q1 = q2;
        q2 = q;
        return temp;
    }
    
};
//Push TC : O(1)  ||  Pop TC : O(N)
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    return 0;
}