#include <iostream>
using namespace std;

class DISTANCE
{
private:
    int kilometer;
    int meter;
    int centimeter;
    void standardize()
    {
        meter += centimeter / 100;
        centimeter %= 100;
        kilometer += meter / 1000;
        meter %= 1000;
    }

public:
    DISTANCE()
    {
        kilometer = 0;
        meter = 0;
        centimeter = 0;
    }
    DISTANCE(int km, int m, int cm)
    {
        kilometer = km;
        meter = m;
        centimeter = cm;
        standardize();
    }
    void Get_distance()
    {
        cout << "Enter distance(Kilometer Meter Centimeter): ";
        cin >> kilometer >> meter >> centimeter;
        standardize();
    }
    void Distance() const
    {
        cout << "Distance: " << kilometer << " km: " << meter << " m: " << centimeter << " cm" << endl;
    }
    DISTANCE operator+(const DISTANCE &d)
    {
        DISTANCE result;
        result.kilometer = kilometer + d.kilometer;
        result.meter = meter + d.meter;
        result.centimeter = centimeter + d.centimeter;
        result.standardize();
        return result;
    }
};
int main()
{
    DISTANCE d1, d2, d3;
    cout << "Enter first distance:\n";
    d1.Get_distance();
    cout << "Enter second distance:\n";
    d2.Get_distance();
    d3 = d1 + d2;
    cout << "First Distance: ";
    d1.Distance();
    cout << "Second Distance: ";
    d2.Distance();
    cout << "Sum of Distance: ";
    d3.Distance();
    return 0;
}