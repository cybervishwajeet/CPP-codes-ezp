#include<iostream>
using namespace std;

int main()
{
	int a[50],*ptr;
	int n,i;
	
	cout<<"\nEnter the count :\n";
	cin>>n;
	
	cout<<"\n Enter the number one by one :\n ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		//assigning the base address of numbers
	}
	ptr=a;
	int sum=0;
	
	//check the even input and sum up them
	
	for(i=0;i<n;i++)
	{
		if(*ptr%2==0){
			sum=sum+*ptr;
			
			ptr++;
		}
	}
	
	cout<<"\n\n sum of even numbers :"<<sum;
}
