#include <iostream>
#include <string>
using namespace std;

class EMPLOYEE {
    public: 
        int Emp_ID;
        string Emp_name, Designation;

        void Get_data() {
            cout << "Enter Employee ID: ";
            cin >> Emp_ID;
            cout << "Enter Name: ";
            cin >> Emp_name;
            cout << "Enter Designation: ";
            cin >> Designation;
        }
};

class SALARY : public EMPLOYEE {
    public:
        double BP, HRA, DA, PF, NP;

        void Get_value() {
            cout << "Enter Basic Pay: ";
            cin >> BP;
            cout << "Enter HRA: ";
            cin >> HRA;
            cout << "Enter DA: ";
            cin >> DA;
            cout << "Enter PF: ";
            cin >> PF;
        }

        void Calculate() {
            NP = BP + HRA + DA - PF;
        }

        void Display() {
            cout << "\nID: " << Emp_ID << ", Name: " << Emp_name << ", Post: " << Designation << endl;
            cout << "Net Pay: " << NP << endl;
        }
};

int main() {
    SALARY s[5];
    for(int i=0; i<5; i++) {
        cout << "\nEnter details of employee " << i+1 << endl;
        s[i].Get_data();
        s[i].Get_value();
        s[i].Calculate();
    }
    for(int i=0; i<5; i++) {
        s[i].Display();
    }
    return 0;
}