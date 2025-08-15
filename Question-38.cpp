#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        int rollNo;
        string name, course;
    public:
        Student(int r, string n, string c) {
            rollNo = r;
            name = n;
            course = c;
        }
        void display() const {
            cout << "**** Student Details ****\n";
            cout << "Roll No: " << rollNo << endl;
            cout << "Name: " << name << endl;
            cout << "Course: " << course << endl;
        }
};
int main() {
    Student stu(1001, "Amit", "Bachelor's of Computer Applications");
    stu.display();
    return 0;
}