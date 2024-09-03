/*
	Write a program which print the bank fixed deposit formula
	
	si=p*r*n/100
	amount = p+si
		
*/

#include<iostream>
using namespace std;
main()
{
  int p,n;
  float r,si,amount;
  cout<<"Enter the value of p r and number of year n\n";
  cin>>p>>r>>n;
  
  si=p*r*n/100;
  amount = p+si;
  
  cout<<"\nSimple interset is :- "<<si<<endl;
  cout<<"Total amount is :- "<<amount;
  
  return 0;
}