/*
	- Simple Guessing Game With cpp
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0));
    int num = rand() % 100 + 1;
    int input;
    int tries = 0;

    cout << "############### Welcome to the Number Guessing Game! #####################\n";

    do {
        cout << "Enter Your Guess (1-100): ";
        cin >> input;

        tries++;

        if (input > num)
            cout << "Too High\n";
        else if (input < num)
            cout << "Too Low\n";
        else
            cout << "Correct!\n";

    } while (input != num);

    cout << "You found the number " << input << " in " << tries << " tries.\n";

    return 0;
}
