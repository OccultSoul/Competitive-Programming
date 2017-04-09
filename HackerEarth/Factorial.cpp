#include <iostream>
using namespace std;

int fact(int num)
{
    if (num==0 || num==1)
    return 1;
    if (num>=2)
    return num*fact(num-1); 
}
int main()
{
    int number,answer;
    cin>>number;
    
    answer=fact(number);
    cout<<answer;
    return 0;
}
