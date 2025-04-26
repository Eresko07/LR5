#include "PatternTemplates.h"
#include <memory>

using namespace std;

void DemoContainerAndIterator() {
   cout << " Container and Iterator Demo " << endl;
   Container<Fruit> fruitBox;
    fruitBox.Add(new Apple());
    fruitBox.Add(new Orange());
}

int main() {


    return 0;
}
