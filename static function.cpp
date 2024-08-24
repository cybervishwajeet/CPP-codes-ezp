#include<iostream>
using namespace std;

class note
{
	static int num;
	public:
		
		static int fun()
		{
			return num;
		}
}
int note::num=5;

int main()
{
	cout<<"\nthe value of the num is :"<<note::fun()<<endl;
}
