#include <iostream>
#include <string>
using namespace std;

class SALARY
{
private:
    float BP, HRA, DA;

public:
    SALARY(float bp = 0.0, float hra = 0.0, float da = 0.0)
    {
        BP = bp;
        HRA = hra;
        DA = da;
    }
    float getNetPay() const
    {
        return BP + HRA + DA;
    }
    void setSalary(float bp, float hra, float da)
    {
        BP = bp;
        HRA = hra;
        DA = da;
    }
};
class EMPLOYEE
{
private:
    int Emp_ID;
    string Emp_name, Designation;
    SALARY salary;

public:
    void Get_data(int id, string name, string des, float bp, float hra, float da)
    {
        Emp_ID = id;
        Emp_name = name;
        Designation = des;
        salary.setSalary(bp, hra, da);
    }
    void Display() const
    {
        cout << "Employee ID: " << Emp_ID << endl;
        cout << "Name: " << Emp_name << endl;
        cout << "Designation: " << Designation << endl;
        cout << "Net Pay: " << salary.getNetPay() << endl;
    }
};
int main()
{
    EMPLOYEE emp;
    emp.Get_data(2005, "Amit Singh", "Software Developer", 500000.0, 95000.0, 60000.0);
    emp.Display();
    return 0;
}