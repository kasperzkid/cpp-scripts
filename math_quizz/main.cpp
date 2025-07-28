/*
	A Simple Math Quiz Game
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0));
    cout << "############## Math Quiz ##################\nType 0 to exit\n";

    double answer;
    double input;

    do {
        int num = rand() % 20 + 1;
        int num2 = rand() % 20 + 1;
        int rand_op = rand() % 4;
        char op[] = {'+', '-', '*', '/'};

        switch (op[rand_op]) {
            case '+': answer = num + num2; break;
            case '-': answer = num - num2; break;
            case '*': answer = num * num2; break;
            case '/': answer = num2 != 0 ? (double)num / num2 : 0; break;
        }

        cout << num << " " << op[rand_op] << " " << num2 << " = ? \n[>] ";
        cin >> input;

        if (input == 0) {
            cout << "Exiting Math Quiz. Goodbye!\n";
            break;
        }

        if (input == answer) {
            cout << "Correct Answer!\n";
        } else {
            cout << "Wrong. The correct answer was: " << answer << "\n";
        }

        cout << "--------------------------------------\n";

    } while (true);

    return 0;
}
