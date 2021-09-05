//동적할당

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Input n: ";
	cin >> n;
	int* arr = new int;
	int Sum=0;
	for (int i = 0; i < n; i++) {
		cin >> *(arr + i);
		Sum += *(arr + i);
	}
	cout << "The sum is " << Sum << endl;
	delete arr;
	return 0;
}