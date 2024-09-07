//code by vishwa
#include<iostream>
using namespace std;

class integer{
	int m,n;
	
	public:
		integer(int ,int);
		
		void display(void)
		{
			cout<<"m = " <<m <<"\n";
			cout<<"n = " <<n <<"\n";
		}
};

integer ::integer(int x,int y)
{
	m=x ;
	n=y ;
}
int main()
{
	integer int1(0,100);
	integer int2 =integer(25,75);
	
	cout<<"OBJECT 1 :";
	int1.display();
	
	cout<<"OBJECT 2 :";
    int2.display();

   return 0;
}
