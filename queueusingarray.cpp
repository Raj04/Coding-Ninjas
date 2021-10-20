#include <iostream>

using namespace std;
class queue
{
    int ms,cs,rear,f;
    int *arr;
    
    public:
    queue(int ds=5)
    {
        arr=new int[ds];
        cs=0;
        ms=ds;
        rear=ms-1;
        f =0;
    }
    ~queue()
    {
        if(arr!=NULL)
        {
            delete [] arr;
            arr=NULL;
        }
    }
    bool full()
    {
        return cs==ms;
    }
    bool empty()
    {
        return cs==0;
    }
    void push(int data)
    {
        if(!full())
        {
        rear=(rear+1)%ms;
        arr[rear]=data;
        cs++;
        }
    }
    void pop()
    {
        if(!empty())
        {
            f=(f+1)%ms;
            cs--;
        }
    }
    int front()
    {
        return arr[f];
    }
    
};

int main()
{
    queue q1;
    for(int i=1;i<=5;i++){
     q1.push(i);}
     
     q1.pop();
     q1.pop();
     q1.push(7);
     while(!q1.empty())
     {
         cout<<q1.front()<<" ";
         q1.pop();
     }

    return 0;
}
