// code by vishwa

#include<iostream>
using namespace std;

int main()
{
	char op;
	double num1,num2;
	
	//display the operation which can perform
	cout<<"Choose operations( + , - , * , / , %):";
	cin>>op;
	
	//input numbers
	
	cout<<"Enter two numbers :";
	cin>>num1>>num2;
	
	switch(op)
	{
		case '+':
			cout<<"result :" <<num1+num2 <<endl;
			break;
		case '-':
			cout<<"result :" <<num1-num2 <<endl;
			break;
		case '*':
			cout<<"result :" <<num1*num2 <<endl;
			break;
		case '/':
			if(num2!=0){
			
			cout<<"result :" <<num1/num2 <<endl;
		}
		else{
			cout<<"Error : Division by zero" <<endl;
		}
			break;
		case '%':
			if((int)num2 != 0){
				cout<<"result :" << (int)num1 % (int)num2 <<endl;
			}
				else{
						cout<<"Error : Division by zero" <<endl;
				}
				break;
				default:
					cout<<" Invalid operation ..!" <<endl;
			
	}
	return 0;
}
