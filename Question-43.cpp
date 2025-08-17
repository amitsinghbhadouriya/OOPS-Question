#include <iostream>
using namespace std;

template <typename T>
class Container {
    private:
        T* data;
        int capacity, size;
        void resize() {
            capacity *= 2;
            T* newData = new T[capacity];
            for(int i = 0; i < size; ++i){
                newData[i] = data[i];
            }
            delete[] data;
            data = newData;
        }
    public:
        Container(int initCapacity = 10) {
            capacity = initCapacity;
            size = 0;
            data = new T[capacity];
        }
        ~Container() {
            delete[] data;
        }
        void addElement(const T& element) {
            if(size == capacity){
                resize();
            }
            data[size++] = element;
        }
        T getElement(int index) const {
            if(index < 0 || index >= size) {
                cout << "Index out of bounds!" << endl;
                exit(1);
            }
            return data[index];
        }
        void displayElements() const {
            for(int i = 0; i < size; ++i){
                cout << data[i] << " ";
            }
            cout << endl;
        }
};
int main() {
    Container<int> intContainer;
    intContainer.addElement(10);
    intContainer.addElement(20);
    intContainer.addElement(30);
    cout << "Integer Container: ";
    intContainer.displayElements();
    Container<string> stringContainer;
    stringContainer.addElement("Hello");
    stringContainer.addElement("World");
    cout << "String Container: ";
    stringContainer.displayElements();
    cout << "Element at index 1 in string container: " << stringContainer.getElement(1) << endl;
    return 0;
}