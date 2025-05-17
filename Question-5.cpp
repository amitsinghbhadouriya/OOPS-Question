#include <iostream>
#include <cmath>
using namespace std;

class Circle {
    private: int r;
             double area, c;
             
    public:
        void getdata() {
            cout << "Enter the radius of the circle: ";
            cin >> r;
        }

        void getArea() {
            area = 3.14*r*r;
        }

        void getCircumference() {
            c = 2*3.14*r;
        }

        void showData() {
            cout << "Area of Circle is: " << area << endl;
            cout << "Circumference of Circle is: " << c << endl;
        }
};

int main() {
    Circle c1;
    c1.getdata();
    c1.getArea();
    c1.getCircumference();
    c1.showData();
    return 0;
}