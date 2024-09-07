// code by vishwa
#include<iostream>
using namespace std;
class sample
{
	int a;
	int b;
	public:
		void setvalue()
		{
			a=25;
			b=40;
		}
		friend float mean(sample m);
};
float mean ( sample m)
{
	return float( m.a + m.b )/2.0;
}
int main()
{
	sample a;
	a.setvalue();
	cout<<"mean value :"<<mean(a)<<"\n";
	
	return 0;
}
