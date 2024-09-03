/*
   Write a program to print the square 1 to 5 number
*/
#include <iostream>
using namespace std;
main(){
	
	int n=1,sqr=1;
	cout<<"Square of 1 to 5\n";
	while(n<=5){
		sqr=n*n;
		cout<<"Square = "<<n<<" - "<<sqr<<endl; 
		n++;
	}
	
}