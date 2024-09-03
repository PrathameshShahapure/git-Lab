/*
	Write a program print the 5 number count of positive number and negative number given by user
*/
#include <iostream>
using namespace std;
main(){
	int a=1,n,neg=0,sum2=0;

	
	for(int a=1;a<=10;a++){
		cout<<"Enter the number";
		cin>>n;
		
		if(n<0){
			neg++;
		}
		if(n%2==0){
			sum2=sum2+n;
			
		}	
	}
	
	
	cout<<"\nTotal negative number:- "<<neg;	
	cout<<"\nTotal sum of positive number:- "<<sum2;

}