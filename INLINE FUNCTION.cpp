#include<iostream>
using namespace std;
inline int fun(int a, int b)
{
	return(a>b)?a:b;
}

int main()
{
	int s,a,b;
	
	cout<<"*****INLINE FUNCTION*****";
	
     cout<<"\n enter the first number :";
     cin>>a;
     
     cout<<"\n enter the second number :";
     cin>>b;
     
     s=fun(a,b);
     
     cout<<"greater number is :"<<s;
     
     return 0;
}
