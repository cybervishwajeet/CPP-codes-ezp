#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
	int swap;
	
	swap=*x;
	*x=*y;
	*y=swap;
}
int main()
{
	int x=400 ,y=500;
	
	swap(&x,&y);
	cout<<"\nvalue of x is :"<<x;
	cout<<"\nvalue of y is :"<<y;
}
