#include <iostream>
using namespace std;

class student{
    private: string name;
             int roll_no;

    public: void studentname(){
        cout << "Enter name: ";
        cin >> name;
    }

    void studentroll_no(){
        cout << "Enter roll_no: ";
        cin >> roll_no;
    }

    void show(){
        cout << "Name of student is: " <<name<<endl;
        cout << "Roll no of student is: "<<roll_no<<endl;
    }
};

int main(){
    student student1;
    student1.studentname();
    student1.studentroll_no();
    student1.show();
    return 0;
}
