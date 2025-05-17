#include <iostream>
using namespace std;

class Employee {
    private: double salary;
             int hrs_per_day;

    public: 
        Employee() {
            salary = 0.0;
            hrs_per_day = 0;
        }

        void getInfo(double salary, int hrs_per_day) {
            this -> salary = salary;
            this -> hrs_per_day = hrs_per_day;
        }

        void AddSal() {
            if(salary < 500) {
                salary += 10;
            }
        }

        void AddWork() {
            if(hrs_per_day > 6) {
                salary += 5;
            }
        }

        double getFinalSalary() {
            return salary;
        }
};

int main() {
    Employee employee;
    double salary;
    int hrs_per_day;
    cout << "Enter salary: ";
    cin >> salary;
    cout << "Enter hours worked per day: ";
    cin >> hrs_per_day;
    employee.getInfo(salary, hrs_per_day);
    employee.AddSal();
    employee.AddWork();
    cout << "The final salary is: $" << employee.getFinalSalary() << endl;
    return 0;
}