#include <iostream>
#include <limits> // Required for numeric_limits
#include <thread> // Required for std::this_thread::sleep_for
#include <chrono> // Required for std::chrono::seconds

// Using the standard namespace to avoid repeatedly typing `std::`
using namespace std;

int main() {
    // Variable to store the numerical score entered by the user
    int score = 0;

    // ---==[ TODO 1: Countdown Loop ]==---
    // Before the grade calculator starts, let's warm up.
    // Write a `for` loop that counts down from 5 to 1.
    // Inside the loop, print the current number followed by "...".
    // To make it look like a real countdown, we will pause for one second
    // after printing each number. The code for this is provided for you.
    // After the loop finishes, print "Go!".
    //
    // The final output of this section should be:
    // 5...4...3...2...1...Go!
    //
    // Your code goes here:
    // for ( ... ) {
    //     cout << i << "..." << flush;
    //     this_thread::sleep_for(chrono::seconds(1));
    // }
    // cout << "Go!" << endl;


    // --- Lab 2: Introduction to Loops and Branches ---
    // This program calculates the letter grade for a given score.
    // It will repeatedly ask for a score until the user enters -1 to quit.

    cout << "\n\n--- Grade Calculator ---" << endl;
    cout << "Enter a numerical score to get the letter grade." << endl;
    cout << "Enter -1 to exit the program." << endl;
    cout << "------------------------" << endl;

    // We will use a `while` loop to keep the program running.
    while (true) {
        cout << "\nPlease enter a score (or -1 to quit): ";
        cin >> score;

        // ---==[ TODO 2: Check for Exit Condition ]==---
        // Write an `if` statement to check if the user entered -1.
        // If they did, use the `break` keyword to exit the loop.
        //
        // Your code goes here:
        // if ( ... ) {
        //     ...
        // }


        // Input validation: Check if the input was not a number
        if (cin.fail()) {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard bad input
            continue; // Skip the rest of this loop iteration
        }


        // ---==[ TODO 3: Grade Calculation Logic ]==---
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
        //     cout << "Grade: A" << endl;
        // } else if ( ... ) {
        //     ...
        // } ... and so on


    } // End of while loop

    cout << "\nThank you for using the Grade Calculator. Exiting." << endl;

    return 0;
}

