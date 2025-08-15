#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
        string name;
        int age;
    public:
        Person(string n, int a) {
            name = n;
            age = a;
        }
    protected:
        string getName() {
            return name;
        }
        int getAge() {
            return age;
        }
    public: 
        virtual void displayDetails() = 0;
        virtual float calculateSalary() = 0;
        virtual ~Person() {}
};

class Employee: public Person {
    private:
        float baseSalary, bonus;
    public:
        Employee(string n, int a, float bs, float b): Person(n, a) {
            baseSalary = bs;
            bonus = b;
        }
        void displayDetails() {
            cout << "Employee Name: " << getName() << endl;
            cout << "Age: " << getAge() << endl;
            cout << "Salary: " << calculateSalary() << endl;
        }
        float calculateSalary() {
            return baseSalary + bonus;
        }
};

int main() {
    Employee emp("Amit", 20, 500000, 5000);
    emp.displayDetails();
    return 0;
}