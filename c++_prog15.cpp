/*
	Write a program print the addition of the user given number
*/
#include <iostream>
using namespace std;
main(){
	int a=1,n;
	cout<<"Enter the number to perform the operation\n";
	cin>>n;

	while(a<=10){
		
		cout<<n<<" * "<<a<<" = "<<n*a++<<endl;
		//a++;
	}		
}