// Copyright (c) 2021 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Oct 2021
// This is a guessing game

#include <iostream>
#include <random>

int main() {
    // This function inputs guess and outputs if correct or not

    // define variables
    std::random_device rseed;
    std::mt19937 rgen(rseed()); // mersenne_twister
    std::uniform_int_distribution<int> idist(0,9); // [0,100]
    const int NUM = idist(rgen);
    
    int guess;

    // input
    std::cout << "Enter guess(0-9): " << std::endl;
    std::cin >> guess;

    // process/output
    if (guess == NUM) {
        std::cout << "You guessed correctly!" << std::endl;
    } else if (guess < 0 || guess > 9) {
        std::cout << "Please guess from 0-9" << std::endl;
    } else {
        std::cout << "Incorrect, the number was "  << NUM;
        std::cout << "." << std::endl;
    }

    // output finished
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
