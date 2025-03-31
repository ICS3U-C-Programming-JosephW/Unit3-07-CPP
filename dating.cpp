// Copyright (c) 2025. Joseph Wondimagnehu. All rights reserved.
//
// Created by: Joseph Wondimagnehu
// Date: Mar. 30, 2025
/* This program checks if a user's age is older than 25
and younger than 40 to get an approval
from grandparents to date their grandchild. Adds additional
checks for validating age inputs. */

/* Include the iostream library for
input and output functionalities. */
#include <iostream>
/* Include the string library to
adhere to the style guidelines. */
#include <string>

// Runs the main function.
int main() {
    // Set constants for minimum and maximum age expectations.
    const int MIN_AGE_EXPECT = 25,
    MAX_AGE_EXPECT = 40;

    // Set constants for the minimum and maximum possible age.
    const int MIN_POSSIBLE_AGE = 0,
    MAX_POSSIBLE_AGE = 120;

    // Declare the string variable for the user's age.
    std::string ageAsString;

    // Ask for the user's age.
    std::cout << "You want to date our grandchild? How old are you?\n";
    // Store the user's input in the string-type age variable.
    std::cin >> ageAsString;

    // Try to check the validity of the entered age.
    try {
        // Declare the integer variable for the user's age.
        int age;
        // Attempt to convert the user's age into an integer.
        age = std::stoi(ageAsString);

        // Check if the user is older than 25 and younger than 40.
        if ((age > MIN_AGE_EXPECT) && (age < MAX_AGE_EXPECT)) {
            // Display the user is approved of dating the grandchild.
            std::cout << "\nYou are approved of dating our grandchild.\n";
        } else if ((age < MIN_POSSIBLE_AGE) || (age > MAX_POSSIBLE_AGE)) {
            /* Also, check if the user enters an 
            invalid age not between 0 and 120. */
            // Display the user needs to enter a valid age.
            std::cout << "\nPlease enter a valid age.\n";
        } else {
            // Otherwise, they are too young or too old for expectations.
            // Display the user is not approved of dating the grandchild.
            std::cout << "\nYou cannot date our grandchild! "
            << "You must be older than 25 and younger than 40.\n";
        }
    }
    catch (std::invalid_argument) {
        /* Run if std::stoi could not convert the
        user's input value to an integer. */
        // Display to the user that their age is not an integer.
        std::cout << "\n" << ageAsString << " is not an integer.\n";
    }

    // Finally, display a message thanking the user for playing.
    std::cout << "Thanks for playing!";
}
