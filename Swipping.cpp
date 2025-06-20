#include<iostream>
using namespace std;
int main()
{
	int x = 5;
	int y = 10;
	cout<<"Before swipping :"<<endl;
	cout<<"x = "<<x<< " : y = "<<y<<endl;
	 
	int z = x;
	x = y;
	y = z;
	cout<<"After swipping :"<<endl;
	cout<<"x = "<<x<< " : y = "<<y<<endl;

}