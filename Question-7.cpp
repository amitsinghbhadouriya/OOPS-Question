#include <iostream>
using namespace std;

class Average {
    private: 
        float calculateAverage(float n1, float n2, float n3){
            return (n1 + n2 + n3)/3.0;
        }

    public: 
        void printAverage() {
            float n1, n2, n3;
            cout << "Enter the first number whose average is to be calculate: ";
            cin >> n1;
            cout << "Enter the second number whose average is to be calculate: ";
            cin >> n2;
            cout << "Enter the third number whose average is to be calculate: ";
            cin >> n3;
            float avg = calculateAverage(n1,n2,n3);
            cout << "The average of " << n1 << "," << n2 << ",and " << n3 << " is: " << avg << endl;
        }
};

void printAverageOfNos() {
    Average avgObj;
    avgObj.printAverage();
}

int main() {
    printAverageOfNos();
    return 0;
}