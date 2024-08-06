#include <bits/stdc++.h>
using namespace std;
int main() {
    random_device rd;  
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 100); 

    int random_number = distrib(gen);

    int user_guess = 0;

    cout << "Guess the number (between 1 and 100): ";

    while (true) {
         cin >> user_guess;

        if (user_guess > random_number) {
            cout << "Too high! Try again: ";
        } else if (user_guess < random_number) {
            cout << "Too low! Try again: ";
        } else {
            cout << "Congratulations! You guessed the correct number: " << random_number << std::endl;
            break;
        }
    }

    return 0;
}
