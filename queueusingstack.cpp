
#include<bits/stdc++.h>
using namespace std;
 
 class queues
 {
     stack<int>s1;
     stack<int>s2;
     public:
     bool isempty()
     {
         return s1.empty();
     }
     void push(int d)
     {
         while(!s1.empty())
         {
             s2.push(s1.top());
             s1.pop();
         }
         s1.push(d);
         while(!s2.empty())
         {
             s1.push(s2.top());
             s2.pop();
         }
     }
     
     void pop()
     {
         if(!isempty())
         {
             s1.pop();
         }
     }
     int front()
     {
         return s1.top();
     }
 };
 int main()
 {
     queues q1;
     int x;
     for(int i=0;i<5;i++)
     {
         cin>>x;
         q1.push(x);
     }
     while(!q1.isempty())
     {
         cout<<q1.front()<<" ";
         q1.pop();
     }
 }
