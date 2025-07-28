#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(0));
	int rand_num = rand() % 3 + 1;
	string user_input;
	string comp;

	string choice[] = {"rock", "paper", "scissor"};

	cout << "############# Rock, Paper, Scissor ##################\n";
	cout << "Enter a choice (rock, paper, scissor): ";
	cin >> user_input;

	comp = choice[rand_num];
	cout << "User Choice: " << user_input << "\n";
	cout << "Computer Choice: " << comp << "\n";


	cout << (user_input == "rock" && comp == "scissor" || user_input == "paper" && comp == "rock" || user_input == "scissor" && comp == "paper" ? "User wins" : "Computer Wins\n");

	return 0;
}
