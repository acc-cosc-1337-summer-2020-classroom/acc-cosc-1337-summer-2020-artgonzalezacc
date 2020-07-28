#include "vector.h"
#include<iostream>
//
Vector::Vector(size_t sz)
: size{0}, space{sz}, elements{new int[sz]}
{
    for(size_t i=0; i < sz; ++i)
    {
        elements[i] = 0;
    }
}


/*
1-initialize size for v2
2-initialize memory for v2
3-copy element values from v1 into v2
*/
Vector::Vector(const Vector& v)
: size{v.size}, elements{new int[v.size]}
{
    for(size_t i=0; i < size; ++i)
    {
        elements[i] = v.elements[i];
    }
}

/*
1-Create temporary memory
2-Copy values from v1 into temporary memory
3-Delete class(v2) elements memory
4-Point elements memory to temporary memory
5-Return a reference to this vector
*/
Vector& Vector::operator=(const Vector& v)
{
    int* temp = new int[v.size];

    for(size_t i=0; i < v.size; ++i)
    {
        temp[i] = v.elements[i];
    }

    delete[] elements;
    elements = temp;
    size = v.size;

    return *this;
}

/*
Get the dynamic memory from v
Get the size from v
Point the v.nums to nullptr
*/
Vector::Vector(Vector && v)
	: size{v.size}, elements{v.elements}
{
	v.size = 0;
	v.elements = nullptr;
}

/*
Deallocate original dynamic memory
Get the dynamic memory from v
Get the size from v
Point v.nums to nullptr
Set v.size to 0
*/
Vector & Vector::operator=(Vector && v)
{
	delete elements;
	elements = v.elements;
	size = v.size;
	v.elements = nullptr;
	v.size = 0;
	
	return *this;
}

/*
Make sure new alllocation is greater than space
Create temporary dynamic array of size new allocation
Copy values from old memory array to temporary array
Delete the old memory array (nums)
Set nums to temporary memory array
Set space = new allocation
*/
void Vector::Reserve(size_t new_allocation) 
{
	if (new_allocation <= space) 
	{
		return;
	}

	int* temp = new int[new_allocation];

	for (size_t i = 0; i < size; ++i) 
	{
		temp[i] = elements[i];
	}

	delete[] elements;

	elements = temp;

	space = new_allocation;
}

/*
Reserve space
Initialize element values beyond size to 0
*/
void Vector::Resize(size_t new_allocation) 
{
	Reserve(new_allocation);

	for (size_t i = size ; i < new_allocation; ++i) 
	{
		elements[i] = 0;
	}

	size = new_allocation;
}

void Vector::Push_Back(int value)
{
	if (space == 0) 
	{
		Reserve(RESERVE_DEFAULT_SIZE);
	}
	else if(size == space)
	{
		Reserve(space * RESERVE_DEFAULT_MULTIPLIER);
	}

	elements[size] = value;
	++size;
}

Vector::~Vector()
{
    std::cout<<"\nrelease memory\n";
    delete[] elements;
}

//NOT PART OF THE VECTOR CLASS!!!!!
void use_stack_vector()
{
    Vector v1(3);
}

void use_heap_vector()
{
    Vector* v1 = new Vector(3);

    delete v1;//to call the destructor
}