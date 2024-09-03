/*
	Write a program print the star patten left to right
*/
#include <iostream>
using namespace std;
main(){
	int n;
	cout<<"Enter the number for pattern:- ";
	cin>>n;
	cout<<"\n";
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
		
			cout<<" * ";	
		}
		cout<<"\n";
	}
		
}