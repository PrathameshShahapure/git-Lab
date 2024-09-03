/*
Write a program to scan min and sec that present in hrs
*/
#include <iostream>
using namespace std;
main(){
	
	int a,s;
	cout<<"Enter the hours\n";
	cin>>a;
	
	s=a*60;
	cout<<"min:- \n"<< s;
	
	s=s*60;
	cout<<"sec:- "<< s;
}