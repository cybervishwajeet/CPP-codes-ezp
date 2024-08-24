#include<iostream>
using namespace std;
class employee
{
	public:
		int emp_no;
		char emp_name[20];
		void get_emp_info()
		{
			cout<<"\n Enter employee no :";
			cin>>emp_no;
			cout<<"\n Enter employee name :";
			cin>>emp_name;
			
		}
		void disp_emp_info()
		{
			cout<<"\nEmployee number : "<<emp_no;
			cout<<"\nEmployee name :"<<emp_name;
			
		}
};
class fitness:public employee
{
	public:
		int h,w;
		void get_fit_info()
		{
			cout<<"\n Enter employee height :";
			cin>>h;
			
			cout<<"\n Enter employee weight :";
			cin>>w;
		}
		void disp_fit_info()
		{
			cout<<"\n employee height is :"<<h;
			cout<<"\n employee weight is :"<<w;
			
			
		}
};
int main()
{
	fitness f;
	f.get_emp_info();
	f.get_fit_info();
	f.disp_emp_info();
	f.disp_fit_info();
	
	return 0;
}
