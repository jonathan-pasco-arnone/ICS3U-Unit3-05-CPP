// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on December 2020
// This program determines which month it is

#include <iostream>

int main() {
    // This program determines which month it is
    // by getting an input form the user

    int monthNumber;

    std::cout << "" << std::endl;
    std::cout << "This program tells you the current month" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Please input the month number (1-12): ";
    std::cin >> monthNumber;
    std::cout << "" << std::endl;

    switch (monthNumber) {
        case 1 :
            std::cout << "The 1st month is January" << std::endl;
            break;
        case 2 :
            std::cout << "The 2nd month is February" << std::endl;
            break;
        case 3 :
            std::cout << "The 3rd month is March" << std::endl;
            break;
        case 4 :
            std::cout << "The 4th month is April" << std::endl;
            break;
        case 5 :
            std::cout << "The 5th month is May" << std::endl;
            break;
        case 6 :
            std::cout << "The 6th month is June" << std::endl;
            break;
        case 7 :
            std::cout << "The 7th month is July" << std::endl;
            break;
        case 8 :
            std::cout << "The 8th month is August" << std::endl;
            break;
        case 9 :
            std::cout << "The 9th month is September" << std::endl;
            break;
        case 10 :
            std::cout << "The 10th month is October" << std::endl;
            break;
        case 11 :
            std::cout << "The 11th month is November" << std::endl;
            break;
        case 12 :
            std::cout << "The 12th month is December" << std::endl;
            break;
        default :
            std::cout << "Invalid Input" << std::endl;
    }
}
