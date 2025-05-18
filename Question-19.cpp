#include <iostream> 
#include <cmath> 
using namespace std; 

class Shape { 
    public: 
        virtual double area() const = 0;  
        virtual ~Shape() {}  
}; 

class Rectangle : public Shape { 
    private: double length, width; 

    public: 
        Rectangle(double l, double w) : length(l), width(w) {} 
    
        double area() const override { 
            return length * width; 
        } 
}; 

class Circle : public Shape { 
    private: double radius;  

    public: 
        Circle(double r) : radius(r) {} 
    
        double area() const override { 
            return M_PI * radius * radius;  
        } 
}; 

int main() { 
    Shape* shape1 = new Rectangle(4.0, 5.0);  
    Shape* shape2 = new Circle(6.0);  
    cout << "Area of Rectangle: " << shape1->area() << endl; 
    cout << "Area of Circle: " << shape2->area() << endl; 
    return 0; 
} 