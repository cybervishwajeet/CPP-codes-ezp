#include<iostream>
using namespace std;
int main()
{
	pair<int,string> p;
	
	p=make_pair(2,"vishwa");
	p={2,"jeet"};
	
	
	cout<<p.first<<" "<<p.second<<endl;
	pair<int,int>p_array[3];
	p_array[0]={1,2};
	p_array[1]={3,5};
	p_array[2]={5,6};
	
	for(int i=0;i<3;++i)
	{
		cout<<p_array[i].first <<" "<<p_array[i].second<<endl;
	}
	
}
