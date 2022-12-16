// Copyright (c) 2022 Tamer Zreg All rights reserved.
// .
// Created by: Tamer Zreg
// Date : Dec 9, 2022
// This program calculates the average of ten randomly
// generated numbers

#include <iostream>
#include <random>

int main() {
    // Initializing variables
    float sum = 0;
    const int MAX_ARRAY_SIZE = 10, MIN_NUM = 0, MAX_NUM = 100;
    int randomNumber;

    // Initializing array
    int randomNumbers[MAX_ARRAY_SIZE];

    // Creating seed for random number generator
    std::random_device rseed;

    std::mt19937 rgen(rseed());

    // Range of random number generator set to 0-100
    std::uniform_int_distribution<int> idist(MIN_NUM, MAX_NUM);

    for (int counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        // Generates a random number from 0-100
        randomNumber = idist(rgen);

        // Appends the number to the array

        randomNumbers[counter] = randomNumber;

        // Prints random number added to list
        std::cout << randomNumber << " added to array at index "
         << counter << "\n";

        // Adds random number to sum variable
        sum += randomNumber;
    }

    // Prints the average of the ten randomly generated numbers
    std::cout << "The average of the " << MAX_ARRAY_SIZE << " numbers ";
    std::cout << "is " << sum / MAX_ARRAY_SIZE << "\n";
}
