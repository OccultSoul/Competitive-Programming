/* 
Problem statement
Given a number, verify whether its prime or not
*/

#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

bool prime_check(int num)
{
    if(num<2)
    {
        return false;
    }
    for (int i=2;i<=sqrt(num);i++)
    {
        if(num%i ==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int testcases;
    int number;
    
    cin>>testcases;
    while(testcases!=0)
    {
        cin>>number;
        if(prime_check(number)== true)
        cout<<"PRIME\n";
        else
        cout<<"NOT PRIME\n";
        --testcases;
    }
    
    return 0;
}
