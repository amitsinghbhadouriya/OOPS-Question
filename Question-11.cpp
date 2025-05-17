#include <iostream>
using namespace std;

class AddDistance {
    private: int feet, inches;

    public: 
        AddDistance(int f=0, int i=0) {
            feet = f;
            inches = i;
            normalize();
        }

        void normalize() {
            if(inches >= 12) {
                feet += inches / 12;
                inches = inches % 12;
            }
        }

        AddDistance add(const AddDistance& other) {
            int totalFeet = feet + other.feet;
            int totalInches = inches + other.inches;
            return AddDistance(totalFeet, totalInches);
        }

        void display() const {
            cout << feet << " feet " << inches << " inches" << endl;
        }
};

int main() {
    AddDistance distance1(5,9);
    AddDistance distance2(3,10);
    cout << "Distance 1: ";
    distance1.display();
    cout << "Distance 2: ";
    distance2.display();
    AddDistance result = distance1.add(distance2);
    cout << "Result after adding distances: ";
    result.display();
    return 0;
}