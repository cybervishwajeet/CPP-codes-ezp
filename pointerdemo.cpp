#include<iostream>
using namespace std;
int main()
{
	int a ,*ptr,**ptr2;
	
	ptr=&a;
	ptr2=&ptr;
    
    cout<<"the address of a :"<<ptr<<"\n";
    cout<<"the address of ptr :"<<ptr2<<"\n";
    cout<<"\n\n";
    
    cout<<"After incrementing the address values :\n\n";
    ptr+=2;
    
    cout<<"the adress of a :"<<ptr<<"\n";
    ptr2+=2;
    
    cout<<"the address of ptr :"<<ptr2<<"\n";
    
    return 0;


}
