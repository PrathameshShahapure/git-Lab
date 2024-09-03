/*
	Write a program which create a menu driven
	1.odd/even
	2.larger number than 3
*/
#include <iostream>
using namespace std;
main(){
	int a,b,ch;
	cout<<"Choice \n1.For Odd even number \n2.For Larger number \n";
	cout<<"\nEnter the choice\n";
	cin>>ch;
	cout<<"\nEnter the 2 number\n";
	cin>>a>>b;
	
	switch(ch)
	{
		
		case 1:
			if(a%2==0)
				cout<<"\neven number :- "<<a;
			else
				cout<<"\nodd number :- "<<a;
			if(a%2!=0)
				cout<<"\neven number :- "<<b;
			else
				cout<<"\nodd number :- "<<b;
		break;
		
		case 2:
			if(a>3)
				cout<<a<<"\n is Larger number than 3 :- \n";
			if(b>3)
				cout<<b<<"\n is Larger number than 3:- ";
		break;
		
		default:
			cout<<"\nInvalid choice!!!";
	}
}