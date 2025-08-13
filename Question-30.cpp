#include <iostream>
#include <cmath>
using namespace std;

class POINT
{
private:
    float x, y;

public:
    void readCoordinates()
    {
        cout << "Enter x and y coordinates: ";
        cin >> x >> y;
    }
    void displayCoordinates() const
    {
        cout << "Point Coordinates: (" << x << ", " << y << ")" << endl;
    }
    float getX() const
    {
        return x;
    }
    float getY() const
    {
        return y;
    }
};
class D : public POINT
{
private:
    float distanceFromOrigin;

public:
    void calculateDistance()
    {
        float x = getX();
        float y = getY();
        distanceFromOrigin = sqrt(x * x + y * y);
    }
    void displayDistance() const
    {
        cout << "Distance from Origin: " << distanceFromOrigin << endl;
    }
};
int main()
{
    D point;
    point.readCoordinates();
    point.displayCoordinates();
    point.calculateDistance();
    point.displayDistance();
    return 0;
}