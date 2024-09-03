/*
	Write the program take the number from user and print wheather the number is 
	positive or negative.
*/
#include<iostream>
using namespace std;
main()
{
  int a;
  cout<<"Enter the value\n";
  cin>>a;
  
  if(a>=0)
  	cout<<a<<" - Number is positive\n";
  else
  	cout<<a<<" - Number is negative";
  
  return 0;
}