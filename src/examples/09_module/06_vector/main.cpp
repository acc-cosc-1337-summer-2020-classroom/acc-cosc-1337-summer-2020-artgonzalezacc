//
#include "vector.h"
#include<iostream>
using std::cout;

int main()
{
    Vector v(3);

    v.Push_Back(10);
    v.Push_Back(5);

    cout<<"Capacity: "<<v.Capacity()<<"\n";
    for(size_t i=0; i < v.Size(); ++i)
    {
        cout<<v[i]<<"\n";
    }

    v.Push_Back(7);
    v.Push_Back(12);

    for(size_t i=0; i < v.Size(); ++i)
    {
        cout<<v[i]<<"\n";
    }


    cout<<"Capacity: "<<v.Capacity();

    return 0;
}

