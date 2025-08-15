#include <iostream>
#include <cmath>
using namespace std;

class SOLID
{
public:
    float radius;
    void getdata()
    {
        cout << "Enter the radius(in cm): ";
        cin >> radius;
    }
};
class SPHERE
{
private:
    SOLID s;

public:
    void input()
    {
        s.getdata();
    }
    void displayVol()
    {
        float volume = (4.0 / 3) * 3.14 * pow(s.radius, 3);
        cout << "Volume of the Sphere: " << volume << endl;
    }
};

int main()
{
    SPHERE sp;
    sp.input();
    sp.displayVol();
    return 0;
}