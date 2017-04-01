/*
Input
There will be multiple lines in input. There will be a number on each line.

Output
If the number is 11, stop taking input and exit. Else, print the number given to you on a single line.
*/

#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
int main()
{   
    int number,i;
 for(i=1;i>0;i++)
 {
  cin>>number;
   
   if(number==11)
   break;
   else
   cout<<number<<endl;
 } 
}
