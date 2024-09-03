/*
	Write a program  of menu driven
	1.Addition
	2.Subtraction
	3.multiplication
	4.division
*/
#include <iostream>
using namespace std;
main(){
	int a,b,ch;
	cout<<"Enter the 2 number\n";
	cin>>a>>b;
	cout<<"Choice \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division";
	cout<<"\nEnter the choice";
	cin>>ch>>endl;
	
	switch(ch)
	{
		
		case 1:
			cout<<"Addition :- "<<a+b;
		break;
		
		case 2:
			cout<<"Subtraction :- "<<a-b;
		break;
		
		case 3:
			cout<<"Multiplication :- "<<a*b;
		break;
		
		case 4:
			cout<<"Division :- "<<a/b;
		break;
		
		default:
			cout<<"Invalid choice!!!";
	}
}