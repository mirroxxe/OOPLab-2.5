#include "Alcohol.h"
#include <iostream>


Alcohol::Alcohol() : strength(0.0) {}
Alcohol::Alcohol(const Liquid& l, double s) : liquid(l), strength(s) {}
Alcohol::Alcohol(const Alcohol& other) : liquid(other.liquid), strength(other.strength) {}

Alcohol& Alcohol::operator=(const Alcohol& other) {
    if (this != &other) {
        liquid = other.liquid;
        strength = other.strength;
    }
    return *this;
}

void Alcohol::Read() {
    std::cout << "Enter alcohol details:\n";
    liquid.Read();
    std::cout << "Enter alcohol strength: ";
    std::string strengthInput;
    std::getline(std::cin >> std::ws, strengthInput);
    strength = std::stod(strengthInput);
}

void Alcohol::Display() const {
    std::cout << "Alcohol details:\n";
    liquid.Display();
    std::cout << "Strength: " << strength << "%" << std::endl;
}

std::string Alcohol::ToString() const {
    return liquid.ToString() + ", Strength: " + std::to_string(strength) + "%";
}

Alcohol& Alcohol::operator++() {
    ++strength;
    return *this;
}

Alcohol Alcohol::operator++(int) {
    Alcohol temp(*this);
    ++(*this);
    return temp;
}

Alcohol& Alcohol::operator--() {
    --strength;
    return *this;
}

Alcohol Alcohol::operator--(int) {
    Alcohol temp(*this);
    --(*this);
    return temp;
}

std::string operator+(const std::string& str, const Alcohol& alcohol) {
    return str + alcohol.ToString();
}

Liquid Alcohol::getLiquid() const {
    return liquid;
}

double Alcohol::getStrength() const {
    return strength;
}

void Alcohol::Init(const std::string& liquidName, double liquidDensity, double s) {
    liquid.Init(liquidName, liquidDensity);
    strength = s;
}