#include <iostream>
#include <cmath>
using namespace std;

class SOLID{
    protected: float radius, height;

    public:
        void getdata(float r, float h = 0) {
            radius = r;
            height = h;
        }
        
        virtual float volume() const = 0;
        virtual ~SOLID() {}
};

class SPHERE : public SOLID {
    public:
        float volume() const override {
            return (4.0 / 3.0) * M_PI * pow(radius, 3);
        }
};

class CYLINDER : public SOLID {
    public:
        float volume() const override {
            return M_PI * pow(radius, 2) * height;
         }
};

int main() {
    SPHERE sphere;
    CYLINDER cylinder;
    float radius, height;
    cout << "Enter the radius of the sphere: ";
    cin >> radius;
    sphere.getdata(radius);
    cout << "Enter the radius and height of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    cylinder.getdata(radius, height);
    cout << "Volume of the sphere: " << sphere.volume() << endl;
    cout << "Volume of the cylinder: " << cylinder.volume() << endl;
    return 0;
}