//
#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include<cstddef>
#include<stddef.h>

template<typename T>
class Vector
{
public:
    Vector();
    Vector(size_t sz);
    Vector(const Vector<T>& v);//copy constructor RULE OF 3 C++98
    Vector<T>& operator=(const Vector<T>& v);//copy assignment RULE OF 3 C++98
    Vector(Vector<T> && v) ;//move constructor
    Vector<T> & operator=(Vector<T> && v);//move assignment
    size_t Size()const{return size;}
    void Reserve(size_t new_allocation);
    size_t Capacity()const { return space; }
    void Resize(size_t new_allocation);
    void Push_Back(T value);
    T& operator[](size_t i){return elements[i];}
    T& operator[](size_t i)const{return elements[i];}
    ~Vector();//destructor RULE OF 3 C++98
private:
    size_t size;
    size_t space;
    T* elements;
    const int RESERVE_DEFAULT_SIZE{ 8 };
	const int RESERVE_DEFAULT_MULTIPLIER{ 2 };
};

//free functions - NOT PART OF THE VECTOR CLASS
void use_stack_vector();
void use_heap_vector();



#endif