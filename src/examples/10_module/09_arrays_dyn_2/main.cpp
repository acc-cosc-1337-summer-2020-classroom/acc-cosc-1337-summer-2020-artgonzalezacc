#include "arrays_dyn_2.h"
#include<iostream>
#include<cctype>
#include<cstring>
#include<string>

using std::cout; using std::cin;

int main() 
{
	/*char letter = 'a';
	
	if(isupper(letter))
	{
		cout<<"Upper \n";
	}
	if(islower(letter))
	{
		cout<<"Lower \n";
	}
	if(isalpha(letter))
	{
		cout<<"Alpha \n";
	}
	if(isdigit(letter))
	{
		cout<<"Digit \n";
	}
	cout<<"Convert to upper: "<<tolower(letter)<<"\n";
	cout<<"Convert to upper: "<<toupper(letter)<<"\n";*/

	//Example char array and fill elements from keyboard
	const int SIZE = 26;
	char name[SIZE];
	cin.getline(name, SIZE);
	cout<<"Name: "<<name<<"\n";

	int indx =0;
	while(name[indx] != '\0')
	{
		cout<<name[indx]<<" ";
		indx++;
	}
	cout<<"\n\n";
	indx = 0;
	char last_name[SIZE] = "Eisenhower";
	while(last_name[indx] != '\0')
	{
		cout<<last_name[indx]<<" ";
		indx++;
	}

	char first_name[SIZE];
	first_name[0] = 'J';
	first_name[1] = 'o';
	first_name[2] = 'e';
	first_name[3] = '\0';//don't forget this at the end
	cout<<"\nFirst name: "<<first_name<<"\n";

	first_name[0] = 'j';

	cout<<"\nFirst name: "<<first_name<<"\n";

	char* ptr_last_name = last_name;
	cout<<"\nLast name via pointer: "<<ptr_last_name<<"\n";

	display_chars(first_name, 4);
	cout<<"Length of first_name: "<<strlen(first_name)<<"\n";
	cout<<"Length of last_name: "<<strlen(last_name)<<"\n";

	strcat(first_name, last_name);
	cout<<"Concatenate: "<<first_name<<"\n";

	int i = std::stoi("5");
	cout<<"Conversion: "<<i<<"\n";

	return 0;
}