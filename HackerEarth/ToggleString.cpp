#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0;s[i]!='\0';i++)
    {
        if(isupper(s[i]))
        s[i]=tolower(s[i]);
        else
        s[i]=toupper(s[i]);
    }
    cout<<s;
    return 0;
}
