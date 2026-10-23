#include <iostream>

int main() {
    int number;
    const int correctNumber = 7;

    do {
       
        std::cout << "guess a number between 1 and 10: ";
        std::cin >> number;

       
        if (number == correctNumber) {
            std::cout << "You guessed the correct number!" << std::endl;
        } else {
            std::cout << "You guessed the wrong number, try again." << std::endl;
        }

  
    } while (number != correctNumber);

    // --- DELETE THIS EXTRA, STRANDED WHILE PART ---
    // while (number != correctNumber ); // <--- This line is the bug. Remove it.

    return 0;
}




