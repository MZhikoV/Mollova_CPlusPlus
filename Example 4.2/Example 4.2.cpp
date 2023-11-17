// Assigning a value to a string array using the keyboard
#include <iostream>
#include <string>


using namespace std;

int main()
{
    const int arrLen = 30;
    char stringArr[arrLen];

    cout << "Enter your name: " << endl;
    cin.getline(stringArr,30);
    cout << "Name: " << stringArr << endl;
    cout << "Enter your address: " << endl;
    cin.getline(stringArr, 30);
    cout << "Address: " << stringArr << endl;

    return 0;
}