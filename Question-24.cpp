#include <iostream>
using namespace std;

class PQR;
class ABC {
    private:
        int a;

    public:
        void enterValue() {
            cout << "Enter value of ABC: ";
            cin >> a;
        }

        friend void displayValues(const ABC&, const PQR&);
};

class PQR {
    private:
        int b;

    public: 
        void enterValue() {
            cout << "Enter value for PQR: ";
            cin >> b;
        }

        friend void displayValues(const ABC&, const PQR&);
};

void displayValues(const ABC& objA, const PQR& objB) {
    cout << "Value from ABC: " << objA.a << endl;
    cout << "Value from PQR: " << objB.b << endl;
}

int main() {
    ABC obj1;
    PQR obj2;
    obj1.enterValue();
    obj2.enterValue();
    displayValues(obj1, obj2);
    return 0;
}