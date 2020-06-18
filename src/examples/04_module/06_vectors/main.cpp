#include "vec.h"
#include<vector>
#include<string>
#include<iostream>

using std::vector;
using std::string;

int main() 
{
	vector<int> num;//empty vector
	if(num.empty())
	{
		std::cout<<"is empty\n";
	}

	vector<int> num1(5);

	for(auto n: num1)
	{
		std::cout<<n<<"\n";
	}

	vector<char> char1(5, 'z');//5 elements w value z

	for(auto c: char1)
	{
		std::cout<<c<<"\n";
	}

	vector<double> dubs{1.5, 2.5};
	vector<std::string> names {"joe", "john", "Mary"};
	names.push_back("Jill");
	for(auto n: names)
	{
		std::cout<<n<<"\n";
	}

	return 0;
}