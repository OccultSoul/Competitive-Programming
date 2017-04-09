/*You have been given an array A of size N consisting of positive integers.
You need to find and print the product of all the number in this array Modulo 10^9 + 7.*/ 

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n;
    long int ans=1;
    cin>>n;
    int a[n],m=pow(10,9)+7;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0)
        a[i]=-a[i];
        ans=(ans*a[i])%m;
    }
    cout <<ans<< endl;
    
    return 0;
}
