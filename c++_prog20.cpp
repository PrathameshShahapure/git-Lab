/*
	Write a program print Factorial in for loop
*/
#include <iostream>
using namespace std;
main(){
	int n,s,fact=1;
	cout<<"Enter the number:- ";
	cin>>n;
	
	for(int a=1;a<=n;a++){
		
		fact=fact*a;
		cout<<a<<"*";
	}
	cout<<fact;


}