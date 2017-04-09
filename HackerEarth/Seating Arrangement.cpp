#include <iostream>
using namespace std;

int main()
{
    int testcases,seat;
    cin>>testcases;
    while(testcases>0)
    {
        cin>>seat;
        
        if(seat%6==0)
        {
            if(seat%12==0)
            cout<<seat-11<<" WS\n";
            else
            cout<<seat+1<<" WS\n";
        }
        else if(seat%6==1)
        {
            if(seat%12<6)
            cout<<seat+11<<" WS\n";
            else
            cout<<seat-1<<" WS\n";
        }
        else if(seat%3==2)
        {
            if(seat%12<6)
            {
                if(seat%2==0)
                cout<<seat+9<<" MS\n";
                else
                cout<<seat+3<<" MS\n";
            }
            else
            {
                if(seat%2==0)
                cout<<seat-3<<" MS\n";
                else
                cout<<seat-9<<" MS\n";
            }
        }
        else if(seat%3==0)
        {
            if(seat%12<6)
            cout<<seat+7<<" AS\n";
            else
            cout<<seat-5<<" AS\n";
        }
        else if(seat%3==1)
        {
            if(seat%12<6)
            cout<<seat+5<<" AS\n";
            else
            cout<<seat-7<<" AS\n";
        }
        testcases--;
    }
    return 0;
}
