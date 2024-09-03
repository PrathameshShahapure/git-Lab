/*
	Write a program print sum of number
	a   = 123
	o/p = 6
*/
#include <iostream>
using namespace std;
main(){
	int n,sum=0;;
	cout<<"Enter the number \n";
	cin>>n;
	
	while(0<n){
		sum=sum+n%10;
		n=n/10;
	}
	cout<<"Sum of the number is :- "<<sum;
		
}