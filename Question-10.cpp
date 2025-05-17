#include <iostream>
#include <string>
using namespace std;

class Employee {
    private: string name;
             int year_of_joining;
             double salary;
             string address;

    public:
        Employee(string n, int y, double s, string a) {
            name = n;
            year_of_joining = y;
            salary = s;
            address = a;
        }

        void display() const {
            cout << name << "\t\t\t" << year_of_joining << "\t\t\t" << salary << "\t\t\t" << salary << endl;
        }
};

int main() {
    Employee emp1("Robert", 1994, 50000, "64C- WallStreat");
    Employee emp2("Sam", 2000, 55000, "68D- WallStreat");
    Employee emp3("John", 1999, 60000, "26H- WallStreat");
    cout << "Name\t\t\tYear of Joining\t\tSalary\t\t\tAddress" << endl;
    emp1.display();
    emp2.display();
    emp3.display();
    return 0;
}