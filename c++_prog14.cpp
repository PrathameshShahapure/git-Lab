/*
	Write a program print the 5 number from the user AND PRINT THE LARGEST NUMBER
*/

#include <iostream>
using namespace std;
main(){
	int a=1,n,max=0;

	while(a<=5){
		cout<<"Enter the number\n";
		cin>>n;
		
		if(n>max){
			max=n;;
		}
		a++;
	}
	
	cout<<"\nLargest number number:- "<<max;
	
}