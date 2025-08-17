#include <iostream>
using namespace std;

template <typename T>
T add(T num1, T num2) {
    return num1 + num2;
}

int main() {
    int int1 = 5, int2 = 10;
    cout << "Sum of integers: " << add(int1, int2) << endl;
    double double1 = 3.5, double2 = 4.5;
    cout << "Sum of doubles: " << add(double1, double2) << endl;
    float float1 = 2.3f, float2 =3.7f;
    cout << "Sum of floats: " << add(float1, float2) << endl;
    return 0;
}