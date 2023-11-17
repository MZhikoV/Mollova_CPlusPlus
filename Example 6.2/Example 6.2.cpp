// Pointers and arrays
#include <iostream>

using namespace std;

int main()
{
    int a[4], *pa;

    pa = a; *pa = 20;
    pa++; *pa = 30;
    pa = &a[2]; *pa = 40;
    pa = a + 3; *pa = 50;

    for (int i = 0; i < 4; i++) {
        cout << a[i] << endl;
    }
    return 0;
}
