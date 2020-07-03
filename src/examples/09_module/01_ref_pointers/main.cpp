#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	//references
	int num{10};
	int& num_ref = num;
	cout<<"value of num: "<<num<<"\n";
	cout<<"address of num: "<<&num<<"\n";
	cout<<"Value of num via num_ref: "<<num_ref<<"\n";
	cout<<"Address of num_ref: "<<&num_ref<<"\n";
	num_ref = 15;
	cout<<"new value of num: "<<num<<"\n\n";

	auto x{5};
	auto* ptr = &x;
	cout<<"value of x: "<<x<<"\n";
	cout<<"address of x: "<<&x<<"\n";
	cout<<"Address of x via ptr: "<<ptr<<"\n";
	cout<<"value of x via ptr: "<<*ptr<<"\n";
	*ptr = 20;
	cout<<"value of x: "<<x<<"\n";

	int* valid_ptr = get_int_pointer();
	cout<<"Invalid pointer: "<<*valid_ptr<<"\n";
	cout<<"Invalid pointer: "<<valid_ptr<<"\n";
	*valid_ptr = 10;
	cout<<"Invalid pointer: "<<*valid_ptr<<"\n";

	int* second_ptr = valid_ptr;


	delete valid_ptr;
	valid_ptr = nullptr;

	*second_ptr = 10;
	cout<<second_ptr;

	return 0;
}