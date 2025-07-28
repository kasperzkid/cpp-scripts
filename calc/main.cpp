/*
	A simple Calcultater written with cpp
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	double num1, num2, result;
	char op;


	cout << "Enter First num: ";
	cin >> num1;

	cout << "Enter Second num: ";
        cin >> num2;

	cout << "Enter Operator(+, -, *, /): ";
        cin >> op;

	switch(op) {
		case '+':
			result = num1 + num2;
		break;

		case '-':
			result = num1 - num2;
                break;

	        case '*':
			result = num1 * num2;
                break;

		case '/':
		if (num2 != 0) {
			result = num1 / num2;
		} else {
			cout << "cant Division By zero";
			}
                break;
	}
		printf("%.2f %c %.2f = %.2f\n", num1, op, num2, result);


	return 0;
}
