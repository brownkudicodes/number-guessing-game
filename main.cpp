#include <iostream>
#include <cstdlib>
#include <random>

// number guessing game (with 5 guesses)
int getRandomNumber() {
    srand(static_cast<unsigned>(time(nullptr)));
    const int random = 1+ (rand() % 100);
    return random;
}

int main() {
    const int random_number = getRandomNumber();

    bool guessed = false;

    for (int i = 1; i <= 5; i++) {
        int n;
        std::cin >> n;
        if (random_number == n) {
            std::cout << "Good Job!!" << '\n';
            return 1;
        }
        std::cout << n << " was not correct." << '\n';
    }

    std::cout << "You lost, it was " << random_number << std::endl;
    return 0;
}
