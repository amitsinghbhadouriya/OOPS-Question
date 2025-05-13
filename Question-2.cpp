#include <iostream>
using namespace std;

class student {
    private: string name;
             int roll_no;
             double phone_no;
             string address;

    public:
        void studentDetails(){
            cout << "Enter the name of student: ";
            cin >> name;
            cout << "Enter the roll no of student: ";
            cin >> roll_no;
            cout << "Enter the phone no of student: ";
            cin >> phone_no;
            cout << "Enter the address of student: ";
            cin >> address;
        }

        void showDetails(){
            cout << "Name of student: "<<name<<endl;
            cout << "Roll no of student: "<<roll_no<<endl;
            cout << "Phone no of student: "<<phone_no<<endl;
            cout << "Address of student: "<<address<<endl;
        }
};

int main(){
    student student1, student2;
    cout << "Enter the details for student 1: "<<endl;
    student1.studentDetails();
    cout <<endl<< "\nDetails of student 1: "<<endl;
    student1.showDetails();
    cout << "\nEnter the details for student 2: "<<endl;
    student2.studentDetails();
    cout <<endl<< "\nDetails of student 2: "<<endl;
    student2.showDetails();
    return 0;
}