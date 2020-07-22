//
#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include<cstddef>
#include<stddef.h>

class Vector
{
public:
    Vector(size_t sz);
    Vector(const Vector& v);//copy constructor RULE OF 3 C++98
    Vector& operator=(const Vector& v);//copy assignment RULE OF 3 C++98
    size_t Size()const{return size;}
    int& operator[](size_t i){return elements[i];}
    int& operator[](size_t i)const{return elements[i];}
    ~Vector();//destructor RULE OF 3 C++98
private:
    size_t size;
    int* elements;
};

//free functions - NOT PART OF THE VECTOR CLASS
void use_stack_vector();
void use_heap_vector();



#endif