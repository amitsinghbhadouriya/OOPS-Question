#include <iostream>
using namespace std;

class Volume {
    private: int length, breadth, height;

    public:
        Volume(int l, int b, int h):length(l),breadth(b),height(h) {}

        int calculateVolume() {
            return length*breadth*height;
        }
};

int main() {
    Volume box(5,3,2);
    cout << "Volume of the box: " << box.calculateVolume() << endl;
    return 0;
}