/*
	Write a program print the 5 number count of positive number and negative number given by user
*/
#include <iostream>
using namespace std;
main(){
	int a=1,n,neg=0, pov=0,sum1=0,sum2=0;

	while(a<=5){
		cout<<"Enter the number\n";
		cin>>n;
		
		if(n>=0){
			sum1=sum1+n;
			pov++;
		}
			
		else{
			sum2=sum2+n;
			neg++;
		}
		
		a++;
	}
	
	cout<<"\nTotal negative number:- "<<neg;
	cout<<"\nTotal positive number:- "<<pov;
	
	cout<<"\nTotal sum of negative number:- "<<sum2;
	cout<<"\nTotal sum of positive number:- "<<sum1;

	cout<<"\nTotal sum of positive number and negative number\n"<<sum1+sum2;
}