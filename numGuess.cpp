#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int secret = std::rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    std::cout << "Guess the number (1-100):\n";
    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < secret) {
            std::cout << "Too low!\n";
        } else if (guess > secret) {
            std::cout << "Too high!\n";
        } else {
            std::cout << "Congratulations! You guessed it in " << attempts << " attempts.\n";
        }
    } while (guess != secret);

    return 0;
}