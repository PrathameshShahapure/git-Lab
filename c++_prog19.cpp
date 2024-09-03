/*
	Write a program print PRIME Number
*/
#include <iostream>
using namespace std;
main(){
	int n,a=2,flag=1;
	cout<<"Enter the number \n";
	cin>>n;
	
	while(a<n){
		
		if(n%a==0){
			flag = 0;
			break;
		}
		a++;
	}
	
	if(flag==1)
		cout<<"Prime Number";
	else
		cout<<"Not a Prime Number";
	
		
}