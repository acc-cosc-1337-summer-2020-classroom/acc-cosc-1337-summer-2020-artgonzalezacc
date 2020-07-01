//shape.h
#include<iostream>

#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
public:
    virtual void draw()=0;//setting it to zero makes it a pure virtual function
    //and our Shape class is an abstract class    
};

#endif 