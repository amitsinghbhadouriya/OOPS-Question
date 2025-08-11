#include <iostream>
using namespace std;

class Distance
{
private:
    int kilometer;
    int meter;

public:
    Distance() : kilometer(0), meter(0) {}

    void input()
    {
        cout << "Enter distance (Kilometer and meters): ";
        cin >> kilometer >> meter;
        adapt();
    }

    void display() const
    {
        cout << "Distance: " << kilometer << "km and " << meter << "m" << endl;
    }

    void adapt()
    {
        kilometer += meter / 1000;
        meter = meter % 1000;
    }

    Distance add(Distance d)
    {
        Distance output;
        output.kilometer = kilometer + d.kilometer;
        output.meter = meter + d.meter;
        output.adapt();
        return output;
    }

    void subtract(Distance &d)
    {
        int total1 = kilometer * 1000 + meter;
        int total2 = d.kilometer * 1000 + d.meter;
        int output = total1 - total2;
        if (output < 0)
        {
            cout << "Resulting distance is negative. Setting it to 0." << endl;
            kilometer = 0;
            meter = 0;
        }
        else
        {
            kilometer = output / 1000;
            meter = output % 1000;
        }
    }
};

int main()
{
    Distance d1, d2, d3;
    cout << "Enter first distance: \n";
    d1.input();
    cout << "Enter second distance: \n";
    d2.input();
    cout << "Addition (Call by Value): ";
    d3 = d1.add(d2);
    d3.display();
    cout << "Subtraction (Call by Reference): ";
    d1.subtract(d2);
    d1.display();
    return 0;
}