#include <iostream>
using namespace std;
void insertion_sort(int num[],int size)
{
	int key,i;
	for(int j=1;j<size;j++)
	{
		key=num[j];
		i=j-1;
		
		while((i>=0)&&(num[i]>key))
		{
			num[i+1]=num[i];
			i=i-1;
			num[i+1]=key;
		}
	}
	for(int j=0;j<size;j++)
	{
		cout<<num[j]<<" "; 
	}
}

int main() 
{
	int Num[]={9,8,77,4,67,2,1};
	insertion_sort(Num,7);
	
	return 0;
}