#include <iostream>
#include <string>
using namespace std;

class Student {
    private: 
        string name;
        int rollno;
        string course;

    public:
        Student(){
            name = "Amit";
            rollno = 19;
            course = "BCA";
            cout << "Default constructor called!" << endl;
        }

        Student(string n, int r, string c){
            name = n;
            rollno = r;
            course = c;
            cout << "Parameterized constructor called!" << endl;
        }

        void display() const {
            cout << "Name: " << name << endl;
            cout << "Roll No: " << rollno << endl;
            cout << "Course: " << course << endl;
        }

        ~Student() {
            cout << "Destructor called for student:" << name << endl;
        }
};
int main() {
    cout << "Creating student1 using default constructor:" << endl;
    Student s1;
    s1.display();
    cout << "\nCreating student2 using parameterized constructor:" << endl;
    Student s2("Abhay singh", 1, "Computer Science");
    s2.display();
    return 0;
}