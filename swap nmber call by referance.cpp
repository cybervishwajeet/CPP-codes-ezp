#include<iostream>
using namespace std;
void swap(int *x, int *y);
int main()
{
	int a=100, b =200;
	
	cout<<"\n Before swapping a number";
	cout<<"\na="<<a<<"\nb="<<b;
	swap(&a,&b);
	cout<<"\n after swapping numbers";
		cout<<"\n"<<a<<"\n"<<b;

	return 0;
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

