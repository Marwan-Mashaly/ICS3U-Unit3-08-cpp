// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: October 2019
// This program tells the user if it's a leap year or not

#include <iostream>
#include <string>

int main() {
    // This function tells user if it's a leap year or not
    std::string year;
    int yearCheck;

    // input
    std::cout << "Enter the year you want: ";
    std::cin >> year;
    std::cout << "" << std::endl;

    // process & output
    try {
        yearCheck = std::stoi(year);
        if ((yearCheck % 4) != 0) {
            std::cout << "it's not a leap year ";
            } else {
                if ((yearCheck % 100) != 0) {
                    std::cout << "it's a leap year ";
                    } else if ((yearCheck % 400) != 0) {
                    std::cout << "it's not a leap year ";
                    } else if ((yearCheck % 400) == 0) {
                    std::cout << "it's a leap year ";
            }
    }
    }catch (std::invalid_argument) {
        std::cout << "Invalid year";
    }
}
