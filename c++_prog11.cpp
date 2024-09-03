/*
	Write a program print the addition of the user given number
*/
#include <iostream>
using namespace std;
main(){
	int a=1,n,s,sum=0;
	cout<<"Enter the number to perform the operation\n";
	cin>>n;
	
	while(a<=n){
		
		cout<<"Enter the to calculate \n";
		cin>>s;
		sum=sum+s;
		a++;
	}
	
	cout<<"Sum:- "<<sum;
	
}