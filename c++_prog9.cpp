/*
	Write a program print the number from 1 to n and n to 1
*/
#include <iostream>
using namespace std;
main(){
	int a=1,n;
	cout<<"Enter the number\n";
	cin>>n;
	

	while(a<=n){
		cout<<"\n"<<a;
		a++;
	}
	
	cout<<"\nReverse number\n";
	
	
	a=1;
	while(a<=n){
		cout<<"\n"<<n;
		n--;
	}

}