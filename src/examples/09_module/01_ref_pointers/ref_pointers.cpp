#include "ref_pointers.h"

//
void val_ref_ptr_cptr(int n1, int& n2, int* n3, int* const n4)
{
    n1 = 0;
    n2 = 5;
    *n3 = 10;
    //n4 = 20;
}

int* get_int_pointer()
{
    int* n = new int(7);

    return n;
}

