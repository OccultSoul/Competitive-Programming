#include<iostream>
using namespace std;
int main()
{
    int testcase,num;
    int a = 3;
    int b = 5;
    int c = 15;
    cin>>testcase;
    while(testcase)
    {
        unsigned int answer=0;
        cin>>num;
         long long na = (num - 1) / a;
        long long nb = (num - 1) / b;
        long long nc = (num - 1) / c;
        long long suma = ((2 * a) + ((na - 1) * a)) * na / 2;
        long long sumb = ((2 * b) + ((nb - 1) * b)) * nb / 2;
        long long sumc = ((2 * c) + ((nc - 1) * c)) * nc / 2;
        cout << (suma+ sumb - sumc) << "\n";
        
        testcase--;
    }
}