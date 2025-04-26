#ifndef PATTERNTEMPLATESH
#define PATTERNTEMPLATESH

#include <iostream>
#include <vector>
#include <memory>

using namespace std;

// Базовый класс фрукта
class Fruit {
public:
    virtual ~Fruit() {}
    virtual void Eat() = 0;
    virtual string GetType() const = 0;
};

// Конкретные фрукты
class Apple : public Fruit {
public:
    void Eat() override {
        cout << "Eating apple..." << endl;
    }
    string GetType() const override { return "Apple"; }
};

class Orange : public Fruit {
public:
    void Eat() override {
        cout << "Eating orange..." < endl;
    }
    string GetType() const override { return "Orange"; }
};


#endif // PATTERNTEMPLATESH
