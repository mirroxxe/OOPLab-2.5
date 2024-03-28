#include "Liquid.h"
#include <iostream>

Liquid::Liquid() : name(""), density(0.0) {}
Liquid::Liquid(const std::string& n, double d) : name(n), density(d) {}
Liquid::Liquid(const Liquid& other) : name(other.name), density(other.density) {}

std::string Liquid::getName() const { return name; }

void Liquid::setName(const std::string& newName) { name = newName; }
double Liquid::getDensity() const { return density; }
void Liquid::setDensity(double newDensity) { density = newDensity; }

void Liquid::Init(const std::string& n, double d) {
    name = n;
    density = d;
}

void Liquid::Read() {
    std::cout << "Enter details for the liquid:\n";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter liquid density: ";
    std::cin >> density;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void Liquid::Display() const {
    std::cout << "Liquid: " << name << ", Density: " << density << std::endl;
}

std::string Liquid::ToString() const {
    return "Liquid: " + name + ", Density: " + std::to_string(density);
}

Liquid& Liquid::operator=(const Liquid& other) {
    if (this != &other) {
        name = other.name;
        density = other.density;
    }
    return *this;
}

Liquid& operator++(Liquid& liquid) {
    ++liquid.density;
    return liquid;
}

Liquid& operator--(Liquid& liquid) {
    --liquid.density;
    return liquid;
}

std::ostream& operator<<(std::ostream& out, const Liquid& liquid) {
    out << "Liquid: " << liquid.name << ", Density: " << liquid.density;
    return out;
}