#include <iostream>
using namespace std;
int main(){
	
//	int n;
//	cout<<"Enter any number";
//	cin>>n;
//	
//	if (n%2==0){
//		cout<<"n is even";
//	} else{
//		cout<<"n is odd";
//	} 


float Subject1,Subject2,Subject3,Subject4,Subject5,Obtainedmarks,totalmarks,percentage;
cout<<"Enter Subject 1 Marks : ";
cin>>Subject1;
cout<<"Enter Subject 2 Marks : ";
cin>>Subject2;
cout<<"Enter Subject 3 Marks : ";
cin>>Subject3;
cout<<"Enter Subject 4 Marks : ";
cin>>Subject4;
cout<<"Enter Subject 5 Marks : ";
cin>>Subject5;
totalmarks=500;
Obtainedmarks=Subject1+Subject2+Subject3+Subject4+Subject5;
percentage =(Obtainedmarks/totalmarks)*100;
cout<<"Your percentage is :"<<percentage;
	return 0;	
	}
	
