#include<iostream>
using namespace std;
int main()
{
	float a = 20.45;
	cout<<"Float Number is : "<<endl;
	cout<<"Integer part of float number is :"<<(int)a<<endl;
	cout<<"Fractional part of float number is : "<<(float)a-(int)a;
	return 0;
}
