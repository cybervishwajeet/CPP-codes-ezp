#include<iostream>
using namespace std;

class A
{
	  int a,b;
	  public:
	  	void input()
	  	{
	  	    cout<<"enter the two numbers :";
			cin>>a>>b;  	
		}		
		friend void add(A obj);		
};
void add(A obj)
{
	int c;
	
	c=obj.a+obj.b;
	cout<<"addtion of two number is :"<<c;	
}
int main()
{
	A object;
	object.input();
	add(object);
}
