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
    cout << "\n Strategies Demo " << endl;
    
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
void DemoTemplateMethod() {
    cout << "\n Template Method Demo " << endl;
    
    // Создаем фрукт и обработчик
    Apple apple;
    AppleProcessor processor;
    
    // Обрабатываем фрукт
    processor.Process(&apple);
}
int main() {
   DemoContainerAndIterator();
   DemoStrategies();
   DemoTemplateMethod();

    return 0;
}
