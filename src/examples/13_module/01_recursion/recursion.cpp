#include "recursion.h"
#include<iostream>
//Write code for recursive display function
void display(int count)
{
    if(count == 0)
    {
        return ;
    }

    std::cout<<"hello\n";
    display(count -1);
}

//Write code for recursive factorial
int factorial(int n)
{
    int f;
    int r;

    if(n == 0)
    {
        return 1;
    }

    std::cout<<"load stack "<<n-1<<"\n";
    r = factorial(n - 1);//loading function calls to the stack
    f = n * r;
    std::cout<<"unload stack n: "<<n<<" r: "<<r<<" f: "<<f<<"\n";
    return f;
}
