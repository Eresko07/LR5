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

// Шаблонный контейнер
template<typename T>
class Container {
    vector<T*> items;
public:
    void Add(T* item) { items.push_back(item); }
    size_t Size() const { return items.size(); }
    T* Get(size_t index) const { return items[index]; }
    ~Container() {
        for(auto item : items) delete item;
    }
};


#endif // PATTERNTEMPLATESH
