#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void arrayA(const vector<vector<int>> & arr, const int &n, const int &rows, const int &cols) {
    int sum=0;

    for (size_t r=0;r<n;r++) {
        for (size_t c=0;c<cols;c++) {
            cout<<arr[r][c]<<' ';
            if (arr[r][c]>0) {
                sum+=arr[r][c];
            }
        }
        cout<<endl;
    }

    cout<<endl;

    for (size_t r=n+1;r<rows;r++) {
        for (size_t c=0;c<cols;c++) {
            cout<<arr[r][c]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<sum<<endl;
}

int main() {
        fstream inp("input.txt");

        int rows,cols;
        inp>>rows>>cols;

        vector<vector<int>>arr;

        arr.resize(rows);

        for (size_t r=0;r<rows;r++) {
            arr[r].resize(cols);
            for (size_t c=0;c<cols;c++) {
                inp>>arr[r][c];
                cout<<arr[r][c]<<' ';
            }
            cout<<endl;
        }

        int num;
        cin>>num;

    arrayA(arr, num, rows, cols);


    system("pause");
    return 0;
}