// Pointer to string

#include <iostream>

using namespace std;

int main()
{
    char w[] = "First type";
    char *pc,*pl;
    
    pc = &w[6];

    cout << "The sixth element is: " << *pc << endl;
    cout << "The rest of the string after pointer: " << pc << endl;

    /**pl = "Characters";

    cout << "First element: " << *pl << endl;
    cout << "Whole string: " << pl << endl;*/

    return 0;
}