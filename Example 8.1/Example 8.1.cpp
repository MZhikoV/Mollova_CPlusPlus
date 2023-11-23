// Example 8.1.cpp : Calculation of the hypotenuse of a triangle using function
#include <iostream>
#include <cmath>

using namespace std;

double hypo(double a, double b) {
    double c = sqrt(pow(a, 2) + pow(b, 2));
    return c;
}

int main()
{
    double a, b;

    do {
        cout << "Enter a: "; cin >> a;
    } while (a <= 0);

    do
    {
        cout << "Enter b: "; cin >> b;
    } while (b <= 0);

    cout << "The hypotenuse c is: " << hypo(a, b) << endl;

    return 0;
}