#include <iostream>
using namespace std;

class Complex {
    private: int real, img;

    public: 
        void getdata() {
            cout << "Enter real part: ";
            cin >> real;
            cout << "Enter imaginary part: ";
            cin >> img;
        }

        void showComplex() {
            cout << "Complex no is: " << real << "+" << img << "i" << endl;
        }

        void SumComplex(Complex a, 
        Complex b){
            Complex temp;
            temp.real = a.real + b.real;
            temp.img = a.img + b.img;
            temp.showComplex();
        }

        void SubComplex(Complex a, Complex b) {
            Complex temp;
            temp.real = a.real - b.real;
            temp.img = a.img - b.img;
            temp.showComplex();
        }

        void productComplex(Complex a, Complex b) {
            Complex temp;
            temp.real = a.real*b.real - a.img*b.img;
            temp.img = a.img*b.real + b.img*a.real;
            temp.showComplex();
        }
};

int main() {
    Complex c1, c2, sum, sub, product;
    cout << "Enter first data. " << endl;
    c1.getdata();
    c1.showComplex();
    cout << endl << "Enter Second data. " << endl;
    c2.getdata();
    c2.showComplex();
    cout << endl << "Sum of";
    sum.SumComplex(c1,c2);
    cout << "Subtraction of";
    sub.SubComplex(c1,c2);
    cout << "Product of";
    product.productComplex(c1,c2);
    return 0;
}