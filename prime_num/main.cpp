/*
	A prime number checker
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num > 1) {
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << "It's a Prime Number\n";
        else
            cout << "Not a Prime Number\n";
    } else {
        cout << "Not a Prime Number\n";
    }

    return 0;
}
