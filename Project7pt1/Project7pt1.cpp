#include <iostream>
#include <random>
#include <algorithm>
#include <string>
#include "Utility.h"
#include "Car.h"

int main() {
    auto cars = randomCars();
    std::cout << "Initial: " << cars << "\n";

    std::reverse(cars.begin(), cars.end());

    std::cout << "Reversed: " << cars << "\n";
}