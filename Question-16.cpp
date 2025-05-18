#include <iostream>
using namespace std;

class Triangle {
    private: double side1, side2, side3;

    public:
        Triangle(double s1, double s2, double s3) {
            side1 = s1;
            side2 = s2;
            side3 = s3;
        }

        bool isEquilateral() const {
            return (side1 == side2 && side2 == side3);
        }

        bool isIsosceles() const {
            return (side1 == side2 || side2 == side3 || side1 == side3);
        }

        bool isScalene() const {
            return (side1 != side2 && side2 != side3 && side1 != side3);
        }

        void displayType() const {
            if(isEquilateral()) {
                cout << "The triangle is Equilateral." << endl;
            }
            else if(isIsosceles()) {
                cout << "The triangle is Isosceles." << endl;
            }
            else if(isScalene()) {
                cout << "The triangle is Scalene." << endl;
            }
            else {
                cout << "This is not a valid triangle." << endl;
            }
        }
};

int main() {
    double s1, s2, s3;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> s1 >> s2 >> s3;
    Triangle Triangle(s1,s2,s3);
    Triangle.displayType();
    return 0;
}