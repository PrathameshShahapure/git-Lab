/*
	Write a program print the fibonnach
	
*/
#include <iostream>
using namespace std;
main(){
	int a=0,n,b=1,f=1;
	cout<<"Enter the number \n";
	cin>>n;
	cout<<a<<"\n";
	cout<<b<<"\n";
	
	while(f<=n){
		
		cout<<f<<"\n";
		a=b;
		b=f;	
		f=a+b;
	}
		
}