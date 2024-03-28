#include <iostream>
#include "Liquid.h"
#include "Alcohol.h"

int main() {
    Liquid water;
    std::cout << "Enter details for the liquid:\n";
    water.Read();

    std::cout << "\nDetails of the liquid:\n";
    water.Display();

    std::cout << "\nString representation of liquid: " << water.ToString() << std::endl;

    Liquid water2;
    water2 = water;

    ++water2;
    std::cout << "\nAfter increment: " << water2 << std::endl;

    return 0;
}