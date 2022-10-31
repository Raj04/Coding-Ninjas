include <iostream> 
using namespace std; 
  
int power(long long int x,long long int y, long long int p)  
{  
    int res = 1;   
  
     x = x % p;
   
    if (x == 0) return 0; 
  
    while (y > 0)  
    {  
        if (y & 1)  
            res = ((res%p)*(x%p)) % p;  
        y = y>>1; 
        x =(x*x)%p;
    }  
    return res;  
}  
  
int main()  
{  
   long long int x,y,p;
   cin>>x>>y>>p; 
    cout<< power(x, y, p);  
    return 0;  
}  
