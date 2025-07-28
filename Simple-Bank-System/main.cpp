/*
	A Simple Script About How Banking System Works
*/

#include <iostream>

using namespace std;

void DepositBalance(int &balance);
void WithdrewBalance(int &balance);

int main() {
	int choice;
	int balance = 100;
	do {
	cout << "################# Banking System #######################\n";
	cout << "1, Show Balance\n";
	cout << "2, Deposit Money\n";
	cout << "3, Withdrew Money\n";
	cout << "4, Exit Money\n";
	cout << "[+] ";
	cin >> choice;

	switch (choice) {

	case 1: cout << "Your total Balance: $" << balance << "\n"; break;
	case 2: DepositBalance(balance); break;
	case 3: WithdrewBalance(balance); break;
	case 4: cout << "Thanks For using Our system"<< "\n"; break;
	default: cout << "\033[1;31m Error: Please Enter a valid Choice\033[0m\n"<< "\n";

		}

	} while (choice != 4);

	return 0;
}

void DepositBalance(int &balance) {
	int input;
	cout << "Enter The Money You want to deposit: ";
	cin >> input;
	balance+=input;

	cout << "[+] Your Total Balance is: " << balance << "\n";
}

void WithdrewBalance(int &balance) {
	int input;
	cout << "Enter The money You want to widthrew (" << balance << "): ";
	cin >> input;
	if (input > balance) {
		cout << "\033[1;31m An available Amount, Withdrew Failed\033[0m\n";
	} else {
		balance-=input;
		cout << "[+] Widthdrew Money: $" << input << "\n[+] Your total Money: $" << balance << "\n";
	}
}
