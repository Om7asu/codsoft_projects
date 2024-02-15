#include <iostream>
#include <ctime>
#include <cstdlib>

int get_user_guess() {
    int guess;
    std::cout << "Enter your guess: ";
    std::cin >> guess;
    return guess;
}

bool is_guess_correct(int user_guess, int correct_guess) {
    return user_guess == correct_guess;
}

bool is_guess_too_high(int user_guess, int correct_guess) {
    return user_guess > correct_guess;
}

bool is_guess_too_low(int user_guess, int correct_guess) {
    return user_guess < correct_guess;
}

void play_game() {
    srand(time(0));
    int correct_guess = rand() % 100 + 1;
    int guess_count = 0;

    std::cout << "I'm thinking of a number between 1 and 100...\n";

    while (true) {
        int user_guess = get_user_guess();
        guess_count++;

        if (is_guess_correct(user_guess, correct_guess)) {
            std::cout << "Congratulations! You found the number in " << guess_count << " guesses!\n";
            break;
        } else if (is_guess_too_high(user_guess, correct_guess)) {
            std::cout << "Too high! Try again.\n";
        } else if (is_guess_too_low(user_guess, correct_guess)) {
            std::cout << "Too low! Try again.\n";
        }
    }
}

int main() {
    play_game();
    return 0;
}