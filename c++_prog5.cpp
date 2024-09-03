/*
   Write a program scan age of person and print it is eligible to vote or not
*/

#include<iostream>
using namespace std;
main()
{
  int age;
  cout<<"Enter the person age\n";
  cin>>age;
  
  if(age>=18)
  	cout<<"It is eligible to vote "<<endl;
  else
  	cout<<"It is not eligible to vote";
  
  return 0;
}