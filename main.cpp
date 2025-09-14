#include <iostream>
#include <limits> // Required for numeric_limits

int main() {
    // Variable to store the numerical score entered by the user
    int score = 0;

    // --- Lab 2: Introduction to Loops and Branches ---
    // This program calculates the letter grade for a given score.
    // It will repeatedly ask for a score until the user enters -1 to quit.

    std::cout << "--- Grade Calculator ---" << std::endl;
    std::cout << "Enter a numerical score to get the letter grade." << std::endl;
    std::cout << "Enter -1 to exit the program." << std::endl;
    std::cout << "------------------------" << std::endl;

    // We will use a `while` loop to keep the program running.
    while (true) {
        std::cout << "\nPlease enter a score (or -1 to quit): ";
        std::cin >> score;

        // ---==[ TODO 1: Check for Exit Condition ]==---
        // Write an `if` statement to check if the user entered -1.
        // If they did, use the `break` keyword to exit the loop.
        //
        // Your code goes here:
        // if ( ... ) {
        //     ...
        // }


        // Input validation: Check if the input was not a number
        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter a number." << std::endl;
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard bad input
            continue; // Skip the rest of this loop iteration
        }


        // ---==[ TODO 2: Grade Calculation Logic ]==---
        // Write a series of `if`, `else if`, and `else` statements
        // to determine the letter grade based on the `score`.
        //
        // - 90 or higher: "Grade: A"
        // - 80 to 89:    "Grade: B"
        // - 70 to 79:    "Grade: C"
        // - 60 to 69:    "Grade: D"
        // - Below 60:    "Grade: F"
        // - Invalid score (less than 0 or greater than 100, but not the -1 exit code)
        //   should print "Invalid score. Please enter a value between 0 and 100."
        //
        // Your code goes here:
        // if ( ... ) {
        //     std::cout << "Grade: A" << std::endl;
        // } else if ( ... ) {
        //     ...
        // } ... and so on


    } // End of while loop

    std::cout << "\nThank you for using the Grade Calculator. Exiting." << std::endl;

    return 0;
}
