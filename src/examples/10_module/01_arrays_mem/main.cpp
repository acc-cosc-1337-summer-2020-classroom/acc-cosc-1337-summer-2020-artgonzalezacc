#include<iostream>
#include<string>

using std::cout;
using std::cin;
int main() 
{
	
	const int SIZE = 3;
	//allocate stack array
	std::string names[SIZE]{"Joe", "Mary", "John"};
	int hours[SIZE];
	double pay_rate[SIZE];

	//access one value
	cout<<names[0];//display joe to screen

	//add values to array elements	
	for(int i=0; i < SIZE; ++i)
	{
		cout<<"\Enter hours: ";
		cin>>hours[i];
		cout<<"Enter rate: ";
		cin>>pay_rate[i];
	}

	//sum totals
	auto total_salary{0};
	//display values
	for(int i=0; i < SIZE; ++i)
	{
		cout<<names[i]<<" ";
		cout<<hours[i]<<" ";
		cout<<pay_rate[i]<<" ";
		cout<<hours[i] * pay_rate[i]<<"\n";

		total_salary += hours[i] * pay_rate[i];
	}

	cout<<total_salary<<"\n";
	

	/*
	std::string names[3] {"Mary", "John"};
	
	for(auto name: names)
	{
		cout<<name<<"\n";
	}*/
	

	return 0;

}