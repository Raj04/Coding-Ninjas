#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q1;
    for(int i=1;i<6;i++)
    {
        q1.push(i);
    }
    while(!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }

    return 0;
}
