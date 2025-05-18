#include <iostream>
#include <cmath>
using namespace std;

class Shape {
    public:
        virtual double area() const = 0;
        virtual double perimeter() const = 0;
        virtual ~Shape() {}
};

class Circle : public Shape {
    private: double radius;

    public:
        Circle(double r) : radius(r) {}

        double area() const override {
            return M_PI * radius * radius;
        }
    
        double perimeter() const override {
            return 2 * M_PI * radius;
        }
};

class Rectangle : public Shape {
    private: double length, width;

    public:
        Rectangle(double l, double w) : length(l), width(w) {}

        double area() const override {
            return length * width;
        }

        double perimeter() const override {
            return 2 * (length + width);
        }
};

class Triangle : public Shape {
    private: double side1, side2, side3;

    public:
        Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}
        
        double area() const override{
            double s = (side1 + side2 + side3) / 2;
            return sqrt(s * (s - side1) * (s - side2) * (s - side3));
        }

        double perimeter() const override{
            return side1 + side2 + side3;
        }
};

int main() {
    Shape *shape1 = new Circle(5);
    Shape *shape2 = new Rectangle(4, 6);
    Shape *shape3 = new Triangle(3, 4, 5);
    cout << "Circle Area: " << shape1->area() << endl;
    cout << "Circle Perimeter: " << shape1->perimeter() << endl;
    cout << "Rectangle Area: " << shape2->area() << endl;
    cout << "Rectangle Perimeter: " << shape2->perimeter() << endl;
    cout << "Triangle Area: " << shape3->area() << endl;
    cout << "Triangle Perimeter: " << shape3->perimeter() << endl;
    return 0;
}