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



#endif // PATTERNTEMPLATESH
