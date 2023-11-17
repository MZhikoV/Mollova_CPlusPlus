//Assigning a value to a string 
#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int ArrayLen = 30;
    char nameArr[ArrayLen];
    
    strcpy_s(nameArr, "I.Goshkov");

    cout << "Name: " << nameArr << endl;

    return 0;
}
