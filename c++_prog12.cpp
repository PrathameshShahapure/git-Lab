/*
	Write a program print the 5 addition of even and odd number given by user
*/
#include <iostream>
using namespace std;
main(){
	int a=1,n,odd=0, even=0;

	while(a<=5){
		cout<<"Enter the number\n";
		cin>>n;
		
		if(n%2==0)
			even=even+n;
		else
			odd=odd+n;
			
		a++;
	}
	
	cout<<"\nOdd number sum\n"<<odd;
	cout<<"\nEven number sum\n"<<even;


}