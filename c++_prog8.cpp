/*
	Write a program which create a menu driven
	check the vowel is or not
*/
#include <iostream>
using namespace std;
main(){
	char ch;
	cout<<"\nEnter the character\n";
	cin>>ch;
	
	switch(toupper(ch))
	{
		
		case 'A':
			cout<<"\nVowel";
		break;
		
		case 'E':
			cout<<"\nVowel";
		break;
		
		case 'I':
			cout<<"\nVowel";
		break;
		
		case 'O':
			cout<<"\nVowel";
		break;
		
		case 'U':
			cout<<"\nVowel";
		break;
		
		default:
			cout<<"\nIt is Not a VOWEL";
	}
}