#include <iostream>
using namespace std;
class Counter {
    private:
        static int objectCount;
    public:
        Counter() {
            objectCount++;
            cout << "Object created! Total objects:" << objectCount << endl;
        }
        static int getObjectCount() {
            return objectCount;
        }
};
int Counter::objectCount = 0;
int main() {
    cout << "Initial object count: " << Counter::getObjectCount() << endl;
    Counter c1;
    Counter c2;
    Counter c3;
    cout << "\nFinal object count (accessed via static function):" << Counter::getObjectCount() << endl;
    return 0;
}