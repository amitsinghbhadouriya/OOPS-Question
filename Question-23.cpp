#include <iostream>
using namespace std;

class Person {
    private: 
        string name;
        int age;

    public: 
        Person(string name, int age) {
            this -> name = name;
            this -> age = age;
        }

        string getName() const {
            return name;
        }

        int getAge() const {
            return age;
        }

        virtual void displayDetails() const = 0;
        virtual double calculateSalary() const = 0;
        virtual ~Person() {}
};

class Employee : public Person {
    private:
        double basicPay;

    public:
        Employee(string name, int age, double basicPay)
        : Person(name, age), basicPay(basicPay) {}

        void displayDetails() const override {
            cout << "Name: " << getName() << endl;
            cout << "Age: " << getAge() << endl;
            cout << "Basic Pay: $" << basicPay << endl;
        }

        double calculateSalary() const override {
            double hra = 0.2 * basicPay;
            double da = 0.1 * basicPay;
            return basicPay + hra + da;
        }
};

int main() {
    Employee emp("Amit Singh", 20, 500000.0);
    emp.displayDetails();
    cout << "Total Salary: $" << emp.calculateSalary() << endl;
    return 0;
}