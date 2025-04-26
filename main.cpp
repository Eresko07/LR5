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

int main() {


    return 0;
}
