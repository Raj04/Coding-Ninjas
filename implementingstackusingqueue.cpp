#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class stacks
{
    queue<int>q1;
    queue<int>q2;
    public:
    bool isempty()
    {
        return q1.empty();
    }
    void push(int d)
    {
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(d);
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
        
    }
    void pop()
    {
        if(!isempty())
        {
        q1.pop();
        }
    }
    int top()
    {
        return q1.front();
    }
};

int main()
{
    
    stacks s1;
    int x;
    for(int i=1;i<=5;i++)
    {
        cin>>x;
    s1.push(x);
    }
    
    while(!s1.isempty())
    {
    cout<<s1.top()<<" ";
    s1.pop();
    }

    return 0;
}
