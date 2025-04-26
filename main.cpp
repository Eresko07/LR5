#include "PatternTemplates.h"
#include <memory>

using namespace std;

void DemoContainerAndIterator() {
   cout << " Container and Iterator Demo " << endl;
   Container<Fruit> fruitBox;
    fruitBox.Add(new Apple());
    fruitBox.Add(new Orange());
   ContainerIterator<Fruit> it(&fruitBox);
    for(it.First(); !it.IsDone(); it.Next()) {
        it.Current()->Eat(); 
    }
}

void DemoStrategies() {
    std::cout << "\n Strategies Demo " << std::endl;
    
    // Создаем фрукты
    Apple apple;
    Orange orange;
    
    // Создаем стратегии
    QuickEatStrategy quick;
    SlowEatStrategy slow;
    
    // Применяем разные стратегии
    quick.Eat(&apple);
    slow.Eat(&orange);
}
int main() {


    return 0;
}
