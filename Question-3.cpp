#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
    private: int s, s1, s2, s3, a, p;

    public:
        void getData() {
            cout << "Enter the side 1: ";
            cin >> s1;
            cout << "Enter the side 2: ";
            cin >> s2;
            cout << "Enter the side 3: ";
            cin >> s3;
            cout << endl;
        }

        void Perimeter() {
            p = s1 + s2 + s3;
        }

        void Area() {
            s = (s1 + s2 + s3)/2;
            a = sqrt(s*(s-s1)*(s-s2)*(s-s3));
        }

        void showData() {
            cout << "Side 1: " << s1 << endl;
            cout << "Side 2: " << s2 << endl;
            cout << "Side 3: " << s3 << endl;
            cout << "Perimeter of triangle: " << p << endl;
            cout << "Area of triangle: " << a << endl;
        }
};

int main() {
    Triangle TriangleData;
    cout << "Enter the Sides of a triangle: " << endl;
    TriangleData.getData();
    TriangleData.Perimeter();
    TriangleData.Area();
    TriangleData.showData();
    return 0;
}