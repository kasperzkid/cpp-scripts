/*
	An Interesting Quiz Game
*/
#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>

using namespace std;

void Quiz();

int main() {
    string name;
    char choice;

    cout << "################# Quiz Game ############################\n";
    cout << "Enter Your Name: ";
    cin >> name;
    cout << "\n[+] Hello " << name << " To This Game, We hope you will enjoy it!\n\nType [y/n] To continue The game: ";
    cin >> choice;

    switch(choice) {
        case 'y':
        case 'Y':
            Quiz();
            break;
        case 'n':
        case 'N':
            cout << "We Hope You will Come Back again!\n";
            break;
        default:
            cout << "Invalid Choice";
            break;
    }

    return 0;
}


void Quiz() {
    this_thread::sleep_for(chrono::seconds(1));
    system("clear");

    cout << "\033[1;32m#################### \033[1;37m Simple Quiz \033[1;32m###################\033[0m\n";

    string questions[] = {
        "What is the default access specifier for members of a class in C++?",
        "Which of the following is a feature of object-oriented programming in C++?",
        "Which of the following smart pointers automatically deallocates memory when it goes out of scope?",
        "What does the const keyword signify when used with a member function?",
        "What is the purpose of the virtual keyword in C++?"
    };

    string choices[] = {
        "A) public\t *B) private\nC) protected\t D) None of the above",
        "A) Encapsulation\t B) Inheritance\nC) Polymorphism\t *D) All of the above",
        "A) std::shared_ptr\t B) std::weak_ptr\nC) std::unique_ptr\t *D) Both A and C",
        "A) The function cannot modify the class members\t B) The function can modify the class members\nC) The function can only be called on const objects\t *D) Both A and C.",
        "A) To declare a constant variable\t *B) To enable polymorphism in derived classes.\nC) To create a static member function.\t D) To prevent inheritance."
    };

    int numQuestions = sizeof(questions) / sizeof(questions[0]);
    char user_answer;
    int score = 0; // initialize score

    for (int i = 0; i < numQuestions; i++) {
        cout << "\nQ" << i + 1 << ": " << questions[i] << endl;

        // Clean and print choices
        string cleanChoices = choices[i];
        size_t starPos = cleanChoices.find("*");
        if (starPos != string::npos)
            cleanChoices.erase(starPos, 1);
        cout << cleanChoices << endl << endl;

        cout << "[+] ";
        cin >> user_answer;
	cout << "###################################\n";
        user_answer = toupper(user_answer);


        // Detect correct answer
        char correct_answer = ' ';
        for (char option : {'A', 'B', 'C', 'D'}) {
            string key = "*" + string(1, option) + ")";
            if (choices[i].find(key) != string::npos) {
                correct_answer = option;
                break;
            }
        }

        if (user_answer == correct_answer) {
            score++;
	}
        this_thread::sleep_for(chrono::seconds(1));
    }

    cout << "\n\033[1;34mYour Score: " << score << " out of " << numQuestions << "\033[0m\n";
}
