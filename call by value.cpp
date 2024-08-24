#include<iostream>
using namespace std;

int sum(int x, int y)
{
	int s1=x+y;
	
	return s1;
}

int main()
{
	int num1=10;
	int num2=20;
	
	int sum_of=sum(num1,num2);
	
	cout<<"the sum is :"<<sum_of;
}
