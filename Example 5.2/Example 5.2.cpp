// Type change
#include <iostream>

using namespace std;

int main()
{
    int m = 9;
    int n = 4;
    
    cout << "(1) Real type (int) m/n: " << m / n << endl;
    cout << "(2) Type change (float) m/n: " << (float)m / (float)n << endl;
    cout << "(3) Type change (float) m/n: " << (float)m / n << endl;
    cout << "(4) Type change (float) m/n: " << m / (float)n << endl;

    return 0;
}
