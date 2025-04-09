// Copyright (c) 2025 Atri Sarker All rights reserved.
// .
// Created By: Atri S
// Date: March 31, 2025
// Grandparents will only approve of a person dating their grandchild
// if they are older than 25 AND younger than 40.
// This program takes an age from the user
// and then tells the user whether they can date the grandchild or not.

#include <iostream>
#include <string>
#include <cstdio>

int main() {
    // Get the user's age as a string
    std::string ageAsString;
    std::cout << "Enter your age: ";
    std::cin >> ageAsString;

    // MAKE CONSTANTS FOR AGE BOUNDARIES
    const int MIN_APPROVED_AGE = 26;  // User has to be older than 25
    const int MAX_APPROVED_AGE = 39;  // User has to be younger than 40
    const int MIN_VALID_AGE = 0;      // User can't have a negative age
    // User can't be older than 120, that's impossible
    const int MAX_VALID_AGE = 120;

    try {
        // Convert the user's age to an integer
        int age = std::stoi(ageAsString);

        // Check if user is older than 25 AND younger than 40
        if ((age >= MIN_APPROVED_AGE) && (age <= MAX_APPROVED_AGE)) {
            // Tell the user that they are approved
            printf("You are approved of dating our grandchild.\n");
        } else if ((age < MIN_VALID_AGE) || (age > MAX_VALID_AGE)) {
            // Tell the user that their age was invalid
            printf("Please enter a valid age.\n");
        } else {
            // Tell the user that they are denied
            printf("You cannot date our grandchild!\n");
            printf("You must be older than 25 and younger than 40.\n");
        }
    } catch (std::invalid_argument) {
        // Tell the user that their input wasn't an integer
        std::cout << ageAsString;
        std::cout << " is not an integer.\n";
    }
    // Program completion message
    printf("Thanks for playing!\n");
}
