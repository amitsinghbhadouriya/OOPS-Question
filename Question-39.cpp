#include <iostream>
using namespace std;

class Animal {
    public:
        virtual void makeSound() {
            cout << "Animal sound" << endl;
        }
};

class Dog: public Animal {
    public:
        void makeSound() {
            cout << "Dog barks: Woof! Woof!" << endl;
        }
};

class Cat: public Animal {
    public:
        void makeSound() {
            cout << "Cat meows: Meow! Meow!" << endl;
        }
};

int main() {
    Animal* a;
    Dog d;
    Cat c;
    a = &d;
    a->makeSound();
    a = &c;
    a->makeSound();
    return 0;
}