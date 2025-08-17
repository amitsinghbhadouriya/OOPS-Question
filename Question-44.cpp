#include <iostream>
using namespace std;

int main() {
    int a,b;

    try {
        cout << "Enter two integers: ";
        cin >> a >> b;

        if(cin.fail()) {
            throw "Invalid input. Not an integer.";
        }

        if(b == 0) {
            throw "Division by zero not allowed.";
        }
        cout << "Result: " << a/b << endl;
    }

    catch(const char *msg) {
        cout << "Exception: " << msg << endl;
    }
    return 0;
}