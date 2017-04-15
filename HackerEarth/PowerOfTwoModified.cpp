#include <iostream>
using namespace std;

int ispoweroftwo(int num)
{
	int val;
	val=num&(num-1);
	return val;
}
 
int main() {
	int number,result;
	cin>>number;
	
	result=ispoweroftwo(number);
	
	if(result==0)
	cout<<"Given number:"<<number<<" is a power of two";
	else
	cout<<"Given number:"<<number<<" is not a power of two";
	return 0;
}