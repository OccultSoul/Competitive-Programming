#include <iostream>
using namespace std;

int main()
{
    string s;
    bool flag;
    cin>>s;
    
    int length=s.length();
    
    for(int i=0;i<length;i++)
    {
        if(s[i]==s[(length-1)-i])
        flag=true;
        else
        {
            flag=false;
            cout<<"NO";
            break;
        }    
    }
    
    if (flag==true)
    cout<<"YES";
    return 0;
}
