#include <iostream>

using namespace std;

int main ()
{
    int ***ptr3;
    int **ptr2;
    int *ptr;
    int var = 20;
    int foo = 7;
    ptr = &var;
    ptr2 = &ptr;
    ptr3 = &ptr2;
    cout << &var << endl;
}