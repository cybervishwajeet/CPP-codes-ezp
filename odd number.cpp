#include<iostream>
using namespace std;
int main()
{
	int i;
	cout<<"\n First 10 odd numbers";
	for(i=1;i<20;i++)  
	{
		if(i%2!=0) //for even i%2==0
		{
			cout<<"\t"<<i;
		}
	}
	return 0;
}
