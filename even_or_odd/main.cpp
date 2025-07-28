/*
	A even or odd checker script
*/

#include <iostream>

using namespace std;

int main() {
	int num;

	cout << "Enter A number: ";
	cin >> num;

	cout << (num % 2 == 0 ? "The Number is even\n" : "The number is odd\n");

	return 0;
}
