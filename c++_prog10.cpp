/*
	Write a program print the number from 1 to n odd and 2 to n even
*/
#include <iostream>
using namespace std;
main(){
	int a=1,n;
	cout<<"Enter the number\n";
	cin>>n;
	
	cout<<"\nOdd number\n";

	while(a<=n){
		cout<<"\n"<<a;
		a=a+2;
	}
	
	cout<<"\nEven number\n";
	
	a=2;
	while(a<=n){
		cout<<"\n"<<a;
		a=a+2;
	}

}