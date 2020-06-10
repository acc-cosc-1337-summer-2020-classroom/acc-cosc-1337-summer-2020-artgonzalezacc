//write include statements
#include "if_else.h"
#include<iostream>

//write cin and cout using statements
using std::cout;
using std::cin;

/*
Write code to capture year from keyboard.
Pass the year to get_generation function and display function result.
*/
int main() 
{
	int value = 12;

	if(!(value < 1 || value > 10))
	{
		cout<<"not in range";
	}

	auto year = 1900;

	cout<<"Enter a year: ";
	cin>>year;

	std::string result = get_generation(year);

	cout<<"Generation is: "<<result;

	return 0;
}