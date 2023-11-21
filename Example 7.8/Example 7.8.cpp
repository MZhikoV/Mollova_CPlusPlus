#include <iostream>

using namespace std;

const int MAXNUM = 20;

int main()
{
    int n;
    cin >> n;

    int arrI[MAXNUM] = {};

    for (int i = 0; i < n; i++) {
        cin >> arrI[i];
    }

    int swapE = 0;

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arrI[i] < arrI[j]) {
                swapE = arrI[i];
                arrI[i] = arrI[j];
                arrI[j] = swapE;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arrI[i]<<' ';
    }
    return 0;
}