/*
	Write a program print the factorial
*/
#include <iostream>
using namespace std;
main(){
	int a=1,n,p,f=1;
	cout<<"Enter the number \n";
	cin>>n;
	cout<<"Enter the number for square\n";
	cin>>p;
	
	while(a<=p){
		
		f=f*n;	
		a++;
	}
	cout<<"Output is "<<f;		
}