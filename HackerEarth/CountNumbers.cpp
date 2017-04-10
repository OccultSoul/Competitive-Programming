#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int testcase;
    string s;
    cin>>testcase;
    
    while(testcase)
    {
        unsigned int length;
        int count=0;
        cin>>length;
        cin>>s;
        for(int i=0;i<length;i++)
        {
            if(isdigit(s[i]))
            {
                int j=i;
                while(isdigit(s[j]))
                {
                    j++;
                }
            count++;
            i=j;
            }
        }
        cout<<count<<"\n";
        testcase--;
    }
    
    return 0;
}