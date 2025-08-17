#include <iostream>
using namespace std;

template <typename T>
T findMinimum(T arr[], int size) {
    T min = arr[0];
    for(int i = 1; i < size; ++i) {
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int intArr[] = {42,17, 8, 99, 23};
    int intSize = sizeof(intArr)/sizeof(intArr[0]);
    cout << "Minimum in integer array: " << findMinimum(intArr, intSize) << endl;
    float floatArr[] = {3.14f, 2.17f, 5.0f, 1.618f};
    int floatSize = sizeof(floatArr)/sizeof(floatArr[0]);
    cout << "Minimum in float array: " << findMinimum(floatArr, floatSize) << endl;
    char charArr[] = {'z', 'a', 'm', 'b', 'y'};
    int charSize = sizeof(charArr)/sizeof(charArr[0]);
    cout << "Minimum in char array: " << findMinimum(charArr, charSize) << endl;
    return 0;
}