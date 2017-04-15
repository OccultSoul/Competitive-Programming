#include <iostream>
using namespace std;

int main() 
{
	int testcase,number;
	cin>>testcase;
	while(testcase)
	{
		int count=0;
		cin>>number;
	// bitwise AND of a number with its predecessor leads to left shift by 1.
		while(number)
		{
			number=number&(number-1);
			count++;
		}
		cout<<count<<endl;
		testcase--;
	}
	return 0;
}