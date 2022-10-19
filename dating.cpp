// Copyright (c) 2022 Kevin Csiffary All rights reserved.
//
// Created by: Kevin Csiffary
// Date: Oct. 18, 2022
// This program checks if the users age is in between 25 and 40
// then tells them if they could date the grandparents grandchild

#include <iostream>

int main() {
    // declares all required variables
    std::string userInputStr;

    int userInputInt;

    // asks the user their age
    std::cout << "What is your age? ";
    std::cin >> userInputStr;

    // adds extra line
    std::cout << "\n";

    try {
        // casts the user input into an integer
        userInputInt = stoi(userInputStr);

        // checks if the user is the correct age
        if (userInputInt >= 25 && userInputInt <= 40) {
            std::cout << "You can date their grandchild";
        } else {
            std::cout << "You cannot date their grandchild";
        }

    // catches any errors with the input
    } catch (std::invalid_argument) {
        std::cout << "you entered an invalid age";
    }

    // adds extra line
    std::cout << "\n";
}
