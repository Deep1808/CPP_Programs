#include <iostream>
using namespace std;
 
void swap_pointer(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}
 
void swap_ref(int& x, int& y)
{
    int z = x;
    x = y;
    y = z;
}


int main()
{
    int a = 5, b = 10;
    cout << "Before Swap\n";
    cout << "a = " << a << " b = " << b << "\n";
 
    swap_pointer(&a, &b);
 
    cout << "After Swap with pass by pointer\n";
    cout << "a = " << a << " b = " << b << "\n";

    a = 10, b = 20;
    cout << "Before Swap\n";
    cout << "a = " << a << " b = " << b << "\n";
 
    swap_ref(a, b);
 
    cout << "After Swap with pass by reference\n";
    cout << "a = " << a << " b = " << b << "\n";
}
 

