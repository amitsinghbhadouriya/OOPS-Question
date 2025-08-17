#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
int main() {
    int x = 5, y = 10;
    cout << "Before swapping(int): x = " << x << ", y = " << y << endl;
    swapValues(x,y);
    cout << "After swapping(int): x = " << x << ", y = " << y << endl;
    double m = 1.5, n = 3.7;
    cout << "\nBefore swapping(double): m = " << m << ", n = " << n << endl;
    swapValues(m,n);
    cout << "After swapping(double): m = " << m << ", n = " << n << endl;
    string str1 = "Hello", str2 = "World";
    cout << "\nBefore swapping(string): str = " << str1 << ", str2 = " << str2 << endl;
    swapValues(str1,str2);
    cout << "After swapping(string): str = " << str1 << ", str2 = " << str2 << endl;
    return 0;
}