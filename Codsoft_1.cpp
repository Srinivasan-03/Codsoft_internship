#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
    std::srand(std::time(0)); 
    int randnum = std::rand() % 50 + 1; 
    int guess = 0;
    std::cout << "Guess the number between 1 and 50: ";
    while (guess != randnum) {
        std::cin >> guess;
        if (guess > randnum) {
            std::cout << "Guess is too high: ";
        } else if (guess < randnum) {
            std::cout << "Guess is too low: ";
        } else {
            std::cout << "You guessed the correct number: " << randnum << std::endl;
        }
    }
    return 0;
}
