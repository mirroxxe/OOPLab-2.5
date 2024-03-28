#pragma once
#include "Liquid.h"

class Alcohol {
private:
    Liquid liquid;
    double strength;

public:
    Alcohol();
    Alcohol(const Liquid& l, double s);
    Alcohol(const Alcohol& other);

    Liquid getLiquid() const;
    double getStrength() const;

    void Init(const std::string& liquidName, double liquidDensity, double s);
    void Read();
    void Display() const;
    std::string ToString() const;

    Alcohol& operator=(const Alcohol& other);
    Alcohol& operator++();
    Alcohol operator++(int);
    Alcohol& operator--();
    Alcohol operator--(int);
    friend std::string operator+(const std::string& str, const Alcohol& alcohol);
};
