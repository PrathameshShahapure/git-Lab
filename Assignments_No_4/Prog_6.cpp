
/*
Write a program take the for loop from 1 to 100 and print upto only seven number
*/
#include<iostream>
using namespace std;
main()
{
	int n=1;
	while(n<=100)
	{
		if(n<=7)
		cout<<n<<" ";
		n++;
	}
}
