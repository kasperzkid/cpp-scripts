/*

A Temprature Conversion script that change
	- From Celsuis to Fahrenheit
	- From Celsuis to kelvin
	- From Fahrenheit to Celsuis
	- From Fahrenheit to kelvin
	- From kelvin to Fahrenheit
	- From kelvin to Celsuis
*/

#include <iostream>
#include <string>
#include <map>
#include <functional>

using namespace std;

// Function prototype for converter
void converter(double from, string to);

int main() {
    int choice;
    double input;

    // User Banner
    cout << "\033[1;34m\t\tWelcome To Temperature Conversion\n";
    cout << "\033[1;32m[1] From Fahrenheit to Celsius\t  [2] From Fahrenheit to Kelvin\n";
    cout << "[3] From Kelvin to Celsius\t  [4] From Kelvin to Fahrenheit\n";
    cout << "[5] From Celsius to Kelvin\t  [6] From Celsius to Fahrenheit\033[0m\n\n";
    cout << "[+] ";
    cin >> choice;

    // Checking User Input
    switch (choice) {
        case 1:
            cout << "\033[1;33mEnter The Fahrenheit Degree:\033[0m ";
            cin >> input;
            converter(input, "FC");
            break;
        case 2:
            cout << "\033[1;33m Enter The Fahrenheit Degree:\033[0m ";
            cin >> input;
            converter(input, "FK");
            break;
        case 3:
            cout << "\033[1;33m Enter The Kelvin Degree:\033[0m ";
            cin >> input;
            converter(input, "KC");
            break;
        case 4:
            cout << "\033[1;33m Enter The Kelvin Degree:\033[0m ";
            cin >> input;
            converter(input, "KF");
            break;
        case 5:
            cout << "\033[1;33m Enter The Celsius Degree:\033[0m ";
            cin >> input;
            converter(input, "CK");
            break;
        case 6:
            cout << "\033[1;33m Enter The Celsius Degree:\033[0m ";
            cin >> input;
            converter(input, "CF");
            break;
        default:
            cout << "\033[1;31mInvalid Choice, try again\n";
    }

    return 0;
}

void converter(double from, string to) {
    map<string, function<void()>> conversionMap;

    conversionMap["FC"] = [&]() {
        double result = (from - 32) * 5.0 / 9.0; // Fahrenheit to Celsius
        cout << "Result From Fahrenheit to Celsius is: " << result << "\n";
    };

    conversionMap["FK"] = [&]() {
        double result = (from - 32) * 5.0 / 9.0 + 273.15; // Fahrenheit to Kelvin
        cout << "Result From Fahrenheit to Kelvin is: " << result << "\n";
    };

    conversionMap["KC"] = [&]() {
        double result = from - 273.15; // Kelvin to Celsius
        cout << "Result From Kelvin to Celsius is: " << result << "\n";
    };

    conversionMap["KF"] = [&]() {
        double result = (from - 273.15) * 9.0 / 5.0 + 32; // Kelvin to Fahrenheit
        cout << "Result From Kelvin to Fahrenheit is: " << result << "\n";
    };

    conversionMap["CK"] = [&]() {
        double result = from + 273.15; // Celsius to Kelvin
        cout << "Result From Celsius to Kelvin is: " << result << "\n";
    };

    conversionMap["CF"] = [&]() {
        double result = (from * 9.0 / 5.0) + 32; // Celsius to Fahrenheit
        cout << "Result From Celsius to Fahrenheit is: " << result << "\n";
    };

    if (conversionMap.find(to) != conversionMap.end()) {
        conversionMap[to](); // Call the function associated with the conversion type
    } else {
        cout << "\033[1;31mInvalid Conversion Type\n"; // Print in red for invalid choice
    }
}
