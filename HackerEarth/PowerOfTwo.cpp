#include <iostream>
using namespace std;
int ispoweroftwo(int number)
{
    if(number==0)
    return false;
    else if(number%2!=0)
    return false;
    else
    {
        bool flag1;
        while(number%2==0)
        {
            flag1=true;
            number/=2;
            
            if(number%2!=0)
            {
                if(number==1)
                flag1= true;
                else
                flag1=false;
            }
           
            
        }
        if (flag1==true)
        return true;
        else 
        return false;
    }
    
    
}
int main()
{
    // Program to check if input is a power of two.
    int number;
    bool flag;
    cin>>number;
    flag=ispoweroftwo(512);
    //conditional check on return value.
    if (flag==true)
    cout<<"POwer of two";
    else
    cout<<"Not a power of two";
    return 0;
}
