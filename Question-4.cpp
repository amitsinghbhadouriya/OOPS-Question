#include <iostream>
using namespace std;

class Area {
    private: int length, breadth;

    public:
        void setDim(int l, int b) {
            length = l;
            breadth = b;
        }

        int getArea() {
            return length*breadth;
        }
};

int main() {
    int l, b;
    Area obj1;

    cout << "Enter the length of the rectangle: ";
    cin >> l;

    cout << "Enter the breadth of the rectangle: ";
    cin >> b;

    obj1.setDim(l,b);
    cout << "The area of the rectangle is: " << obj1.getArea() << endl;
    return 0;
}