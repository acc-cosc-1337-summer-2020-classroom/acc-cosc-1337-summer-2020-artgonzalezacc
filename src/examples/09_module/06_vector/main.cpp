//
#include "vector.h"
#include<iostream>
using std::cout;

int main()
{
    Vector<double> v(3);

    v.Push_Back(10.5);
    v.Push_Back(5.25);

    cout<<"Capacity: "<<v.Capacity()<<"\n";
    for(size_t i=0; i < v.Size(); ++i)
    {
        cout<<v[i]<<"\n";
    }

    v.Push_Back(7.19);//size is 3
    v.Push_Back(12.15);//space must be added to elements array

    for(size_t i=0; i < v.Size(); ++i)
    {
        cout<<v[i]<<"\n";
    }


    cout<<"Capacity: "<<v.Capacity();

    return 0;
}

