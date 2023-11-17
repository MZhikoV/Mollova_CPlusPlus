// Print array using pointers
#include <iostream>

using namespace std;

int main()
{
    int arrayT[8] = { 10,20,30,40,50,60,70,80 };

    int *ptr = arrayT;

    for (int i = 0; i < 8; i++) {
        cout << *ptr << endl;
        ptr++;
    }
    return 0;
}