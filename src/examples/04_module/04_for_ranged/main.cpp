#include<string>
#include<iostream>
#include "for_ranged.h"

using std::cin;

int main() 
{/*
	//Creating strings
	std::string name1;
	std::cout<<"name1 "<<name1<<"\n";
	std::string name = "joe";//create string assign joe to it
	std::cout<<"name "<<name<<"\n";
	std::string name2{"john"};
	std::cout<<"name2 "<<name2<<"\n";
	std::string name3(9, 'a');
	std::cout<<"name3 "<<name3<<"\n";

	//string operations
	if(name1 == name)
	{
		std::cout<<"same";
	}

	name1 += name;//0=j, 1=o, and 2=e
	std::cout<<"name1 "<<name1<<"\n";
	std::cout<<"element 1 of name: "<<name1[1]<<"\n";
	name.push_back('y');//name is now joey
	std::cout<<"name "<<name<<"\n";
	name2.insert(4, "y");//john would be johny
	name2.push_back('y');
    std::cout<<"name2 "<<name2<<" size "<<name2.size()<<"\n";	
	
	for(auto& n: name2)
	{
		n = 'a';
		//std::cout<<n<<"\n";
	}
	std::cout<<"name2 "<<name2<<" size "<<name2.size()<<"\n";	*/

	std::string last_name;
	std::cout<<"Enter last name: ";
	std::getline(cin, last_name);
	std::cout<<last_name;
	last_name[2];//access the letter n
	

	/*std::string name = "John";
	loop_string_w_index(name);
	std::cout<<"\n\n";
	loop_string_for_range(name);*/

	return 0;
}