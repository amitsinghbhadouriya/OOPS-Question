#include <iostream> 
using namespace std; 

class Employee { 
    private: double salary; 

    public: 
        Employee(double sal) { 
            salary = sal; 
        } 

        inline void increaseSalary(double percent) { 
            salary += (salary * percent / 100);   
        } 

        void displaySalary() const { 
            cout << "Current Salary: " << salary << endl; 
        } 
}; 
 
int main() { 
    double salary, percent; 
    cout << "Enter the salary of the employee: "; 
    cin >> salary; 
    cout << "Enter the percentage by which salary should be increased: "; 
    cin >> percent; 
    Employee emp(salary); 
    emp.displaySalary(); 
    emp.increaseSalary(percent); 
    cout << "Updated "; 
    emp.displaySalary(); 
    return 0; 
}