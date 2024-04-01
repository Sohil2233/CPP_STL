#include <bits/stdc++.h>
using namespace std;
int main()
{
    // stack
    // lifo operation
    stack<int> st;
    // all operation take O(1)
    // only deletion of queue take linear time complexcity
    // pop
    // push and emplace
    // top
    // size
    // empty

    // push
    st.push(2);
    cout << st.top() << endl;
    st.push(4);
    cout << st.top() << endl;
    st.push(3);
    cout << st.top() << endl;
    st.push(1);
    cout << st.top() << endl;
    // pop
    st.pop();
    cout << st.top() << endl;

    // delete the entire stack
    while (!st.empty())
        st.pop();

    cout << st.size() << endl; // number of elements in stack

    stack<int> st1;
    if (!st1.empty())
    {
        cout << st.top() << endl; // always check first //otherwise it will throw error
    }

    // Queue
    // fifo operations
    queue<int> q;
    // all operation take O(1)
    // only deletion of queue take linear time complexcity
    // push
    // front
    // pop
    // size
    // empty
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(5);

    // pop
    q.pop();                   //->1 will pop
    cout << q.front() << endl; //->2 is printed

    // for delete the whole queue
    while (!q.empty())
    {
        q.pop();
    }

    // priority_Queue
    // push//pop
    // size
    // top
    // empty
    // all in sorted ordered and fuction take logN
    priority_queue<int> pq;
    pq.push(1);
    pq.push(6);
    pq.push(5);
    pq.push(2);
    // order will be 1,2,5,6

    cout << pq.top() << endl; // print 6
    pq.pop();
    cout << pq.top() << endl; // print 5

    priority_queue<int> p;
    p.push(-1); // p.push(-1*el);
    p.push(-6);
    p.push(-5);
    p.push(-2);
    // order will -6,-5,-2,-1

    cout << -1 * p.top() << endl; // print -1//only give -1 sign

    // minimum priority queue
    priority_queue<int, vector<int>, greater<int>> qp;
    qp.push(1);
    qp.push(6);
    qp.push(5);
    qp.push(2);

    cout << qp.top() << endl; // print 1

    // dequeue
    deque<int> dp;
    // push_front()
    // push_back()
    // pop_front()
    // pop_back()
    // begin(),end(),rbegin(),rend()
    // size
    // clear
    // empty
    // at

    return 0;
}