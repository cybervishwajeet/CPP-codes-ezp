// code by vishwa
#include<iostream>
using namespace std;

class set
{
	int n,m;
	
	public :
		void input(void);
		void display(void);
		int largest(void);	
};

int set ::largest(void)
{
	if(m>=n)
	
		return(m);
	else
	    return(n);	
}

void set :: input(void)
{
	cout<<"Enter input value for m and n : \n ";
	cin>>m>>n;
	
}
void set :: display(void)
{
	cout<<" largest value : \n" <<largest()<<"\n";
	
}
int main()
{
	set A;
	A.input();
	A.display();
	
	return 0;
}
