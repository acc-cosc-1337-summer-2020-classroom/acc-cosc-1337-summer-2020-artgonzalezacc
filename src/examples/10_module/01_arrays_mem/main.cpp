#include<iostream>
#include<string>

using std::cout;
using std::cin;
int main() 
{
	const int SIZE = 3;
	std::string name[SIZE];
	int hours[SIZE];
	double pay_rate[SIZE];
	

	for(int i=0; i < SIZE; ++i)
	{
		cout<<"\nEnter name: ";
		cin>>name[i];
		cout<<"\Enter hours: ";
		cin>>hours[i];
		cout<<"Enter rate: ";
		cin>>pay_rate[i];
	}

	

	/*
	std::string names[3] {"Mary", "John"};
	
	for(auto name: names)
	{
		cout<<name<<"\n";
	}*/
	

	return 0;

}