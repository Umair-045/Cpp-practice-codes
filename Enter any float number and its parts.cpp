#include<iostream>
using namespace std;
int main()
{
	float a;
	cout<<"Enter float number : ";
	cin>>a;
	cout<<"Integer part of float number : "<<(int)a<<endl;
	cout<<"Fractional part of float number : "<<(float)a-(int)a;
	return 0;
}
