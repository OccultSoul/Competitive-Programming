#include <iostream>
using namespace std;

int main()
{
    int length,number,width,height;
    
    cin>>length;
    cin>>number;
    
    for(int i=0;i<number;i++)
    {
        cin>>width;
        cin>>height;
        
        if(width<length || height<length)
        cout<<"UPLOAD ANOTHER\n";
        else
        {
            if(width==height)
            cout<<"ACCEPTED\n";
            else
            cout<<"CROP IT\n";
        }
       
        
    }
    
    return 0;
}
