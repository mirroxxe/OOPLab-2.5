#pragma once
#include <string>

class Man {
private:
    std::string name;
    int age;

public:
    Man();
    Man(const std::string& n, int a);

    void read();
    void setName(const std::string& newName);
    void setAge(int newAge);

    std::string getName() const;
    int getAge() const;
};
