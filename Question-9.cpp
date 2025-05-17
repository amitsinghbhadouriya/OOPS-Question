#include <iostream>
using namespace std;

class Rectangle {
    private: int length, breadth;

    public:
        Rectangle(int l, int b) {
            length = l;
            breadth = b;
        }

        int Area() {
            return length*breadth;
        }
};

int main() {
    float l1,b1,l2,b2;
    cout << "Enter the length of the first rectangle: ";
    cin >> l1;
    cout << "Enter the breadth of the first rectangle: ";
    cin >> b1;
    cout << "Enter the length of the second rectangle: ";
    cin >> l2;
    cout << "Enter the breadth of the second rectangle: ";
    cin >> b2;
    Rectangle r1(l1,b1);
    Rectangle r2(l2,b2);
    cout << "\nThe area of the First Rectangle is: " << r1.Area() << endl;
    cout << "The area of the Second Rectangle is: " << r2.Area() << endl;
    return 0;
}