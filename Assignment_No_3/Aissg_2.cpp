/*
	Write a program  of menu driven by using symbol
	+ = Addition
	- = Subtraction
	* = multiplication
	/ = division
*/
#include <iostream>
using namespace std;
main(){
	int a,b;
	char ch;
	cout<<"Enter the 2 number\n";
	cin>>a>>b;
	cout<<"Choice \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division";
	cout<<"\nEnter the choice ";
	cin>>ch;
	
	switch(ch)
	{
		
		case '+':
			cout<<"Addition :- "<<a+b;
		break;
		
		case '-':
			cout<<"Subtraction :- "<<a-b;
		break;
		
		case '*':
			cout<<"Multiplication :- "<<a*b;
		break;
		
		case '/':
			cout<<"Division :- "<<a/b;
		break;
		
		default:
			cout<<"Invalid choice!!!";
	}
}