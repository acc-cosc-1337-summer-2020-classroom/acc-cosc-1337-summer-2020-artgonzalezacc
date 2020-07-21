#include<iostream>
using std::cout;


int main() 
{
	const int SIZE = 3;
	int nums[SIZE]{10,20, 30};
	int* nums_ptr;

	nums_ptr = nums;
	cout<<*nums_ptr<<"\n";
	nums_ptr++;
	cout<<*nums_ptr<<"\n\n";

	//loop forward with pointer
	int* loop_ptr = nums;
	for(int i=0; i < SIZE; ++i)
	{
		cout<<*loop_ptr<<"\n";
		loop_ptr++;
	}
	cout<<"\n";
	for(int i=0; i < SIZE; ++i)
	{
		loop_ptr--;
		cout<<*loop_ptr<<"\n";
	}

	return 0;
}