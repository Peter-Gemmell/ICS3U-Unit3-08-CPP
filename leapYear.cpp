// Copyright (c) 2022 Peter Gemmell All rights reserved
// Created by Peter Gemmell
// Created on April 2022
// This program calculates if leap year

#include <iostream>
#include <string>

int main() {
    // this function determines if a given year is a leap year
    std::string yearnumberString;
    int yearnumber;

    // input
    std::cout << "Please enter a year : ";
    std::cin >> yearnumberString;

    // process
    try {
        yearnumber = std::stoi(yearnumberString);
        if (yearnumber % 4 == 0) {
            if (yearnumber % 100 == 0) {
                if (yearnumber % 400 == 0) {
                    std::cout << "Is a leap year."
                    << std::endl;
                } else {
                    // output
                    std::cout << "Is not a leap year."
                    << std::endl;
                }
            } else {
                std::cout << "Is a leap year."
                << std::endl;
            }
        } else {
            std::cout << "Is not a leap year."
            << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid year entered, please try again." << std::endl;
    }
    std::cout << "Done." << std::endl;
}
