#include <iostream>
#include <math.h>
using namespace std;

void isprime (int num)
{
    bool flag=true;
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            flag=false;
            break;
        }
    }
    if (flag==true)
    cout<<num<<" ";
}

int main()
{
    int limit;
    cin>>limit;
    
    for(int i=2;i<=limit;i++)
    {
        isprime(i);
    }
    
    return 0;
}
