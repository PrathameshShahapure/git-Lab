/*
	Write a program print the star patten left to right
	small-97 - a
	captial=65 -A
*/
#include <iostream>
using namespace std;
main(){
	int n;
	char ch,ch1;
	cout<<"Enter the number for pattern:- ";
	cin>>n;
	cout<<"\n";
	for(int i=1;i<=n;i++){
		ch=65;
		ch1=97;
		for(int j=1;j<=i;j++){
			
			cout<<ch<<ch1<<" ";
			ch++;
			ch1++;	
		}
		cout<<"\n";
	}
		
}