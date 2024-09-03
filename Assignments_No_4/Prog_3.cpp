/*
   Write a program to print the leap year between 2000 to 2020
*/
#include <iostream>
using namespace std;
main(){
	int n=2000;
	while(n<=2020){
		
		if(n%4==0)	
			cout<<n<<" is a Leap year\n";
		n++;
	}
	
}