// Pointers
#include <iostream>

using namespace std;

int main()
{
    int a, b, * pa, c;
    
    a = 8;
    pa = &a;
    b = *pa;
    *pa = 15;
    c = *pa + 1;
    
    int *pb;

    pb = pa;

    int x1;

    x1 = *pa + 5 + *pb;

    cout << "Address a -> " << pa << endl;
    cout << "Value of a-> " << *pa << endl;

    return 0;
}