/*
   Write a program scan 2 number and print the largest number
*/

#include<iostream>
using namespace std;
main()
{
  int a,b;
  cout<<"Enter the 1 value\n";
  cin>>a;
  cout<<"Enter the 2 value\n";
  cin>>b;
  
  if(a>b)
  	cout<<a<<" - Number is greater than "<<b<<endl;
  else
  	cout<<b<<" - Number is grater than "<<a<<endl;
  
  return 0;
}