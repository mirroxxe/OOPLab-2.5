#pragma once
#include <iostream>
#include <string>

class Liquid {
private:
    std::string name;
    double density;

public:
    Liquid();
    Liquid(const std::string& n, double d);
    Liquid(const Liquid& other);

    std::string getName() const;
    void setName(const std::string& newName);

    double getDensity() const;
    void setDensity(double newDensity);

    void Init(const std::string& n, double d);
    void Read();
    void Display() const;
    std::string ToString() const;

    Liquid& operator=(const Liquid& other);
    friend Liquid& operator++(Liquid& liquid);
    friend Liquid& operator--(Liquid& liquid);
    friend std::ostream& operator<<(std::ostream& out, const Liquid& liquid);
};