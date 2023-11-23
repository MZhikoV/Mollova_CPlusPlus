#include <iostream>

using namespace std;


// Trying to add additional arguments in loop declaration
int main()
{
	int n;
	cin >> n;

	for (int i = 1; ((i < n) || (i % 2 == 0)); i++) {
		cout << i << ' ';
	}
	return 0;
}