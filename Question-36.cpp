#include <iostream>
#include <string>
using namespace std;

class SALARY
{
public:
    float BP, HRA, DA;
};
class EMPLOYEE
{
public:
    int Emp_ID;
    string Emp_name, Designation;
    SALARY salary;
};
int main()
{
    EMPLOYEE emp;
    cout << "Enter Employee ID: ";
    cin >> emp.Emp_ID;
    cin.ignore();
    cout << "Enter Employee Name: ";
    getline(cin, emp.Emp_name);
    cout << "Enter Designation: ";
    getline(cin, emp.Designation);
    cout << "Enter Basic Pay(BP): ";
    cin >> emp.salary.BP;
    cout << "Enter House Rent Allowance(HRA): ";
    cin >> emp.salary.HRA;
    cout << "Enter Dearness Allowance(DA): ";
    cin >> emp.salary.DA;
    float netPay = emp.salary.BP + emp.salary.HRA + emp.salary.DA;
    cout << "\n:::: Employee Details ::::" << endl;
    cout << "Employee ID: " << emp.Emp_ID << endl;
    cout << "Name: " << emp.Emp_name << endl;
    cout << "Designation: " << emp.Designation << endl;
    cout << "Net Pay: " << netPay << endl;
    return 0;
}