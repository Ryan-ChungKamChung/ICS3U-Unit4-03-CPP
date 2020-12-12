// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in December 2020
// Program does factorials

#include <math.h>
#include <iostream>
#include <string>


int main() {
    // Function does factorials

    std::string numberString;
    int number;
    int loopCounter = 0;
    int numberExponent;

    std::cout << "I will give you the square of every positive number up to"
    << " the inputted number" << std::endl;

    // Input
    std::cout << "Enter number: ";
    std::cin >> numberString;

    // Process
    try {
        number = std::stoi(numberString);
        if (number < 0) {
            throw std::invalid_argument("");
        }

        for (loopCounter = 0; loopCounter < number + 1; loopCounter++) {
            numberExponent = pow(loopCounter, 2);
            // Output
            std::cout << loopCounter << "² = " << numberExponent << std::endl;
        }
    } catch (std::invalid_argument) {
        // Output
            std::cout << "This isn't a valid number" << std::endl;
    }
}
