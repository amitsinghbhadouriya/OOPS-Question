#include <iostream>
#include <string>
using namespace std;

class Person {
    protected:
        string name;
        int age;
    public:
        Person(): name(""), age(0) {}
        Person(string n, int a): name(n), age(a) {}
        virtual void displayDetails() const = 0;
        virtual float calculateSalary() const = 0;
        int getAge() const {
            return age;
        }
        string getName() const {
            return name;
        }
        friend void compareAges(const Person& p1, const Person& p2);
};
class Student : public Person {
    private:
        int rollNumber;
        char grade;
    public:
        Student() : rollNumber(0), grade('F') {}
        Student(string n, int a, int r, char g): Person(n, a), rollNumber(r), grade(g) {}
        Student(const Student& s) {
            name = s.name;
            age = s.age;
            rollNumber = s.rollNumber;
            grade = s.grade;
        }
        void setRollNumber(int r) {
            rollNumber = r;
        }
        int getRollNumber() const {
            return rollNumber;
        }
        void setGrade(char g) {
            grade = g;
        }
        char getGrade() const {
            return grade;
        }
        void displayDetails() const override {
            cout << "Student Name: " << name << "\nAge: " << age << "\nRoll Number: " << rollNumber << "\nGrade: " << grade << endl;
        }
        float calculateSalary() const override {
            return 0.0f;
        }
};
class Teacher : public Person {
    private:
        int employeeID;
        string subject;
    public:
        Teacher() : employeeID(0), subject(""){}
        Teacher(string n, int a, int id, string s) : Person(n,a), employeeID(id),subject(s) {}
        void setEmployeeID(int id) {
            employeeID = id;
        }
        int getEmployeeID() const {
            return employeeID;
        }
        void setSubject(string s) {
            subject = s;
        }
        string getSubject() const {
            return subject;
        }
        void displayDetails() const override {
            cout << "Teacher Name: " << name << "\nAge: " << age << "\nEmployeeID: " << employeeID << "\nSubject: " << subject << endl;
        }
        float calculateSalary() const override {
            return 50000.0f;
        }
};
void compareAges(const Person& p1, const Person& p2) {
    if(p1.age > p2.age){
        cout << p1.name << " is older than " << p2.name << endl;
    }
    else if (p1.age < p2.age){
        cout << p2.name << " is older than " << p1.name << endl;
    }
    else{
        cout << p1.name << " and " << p2.name << " are of the same age." << endl;
    }
}
int main() {
    Person* p;
    string name;
    int age;
    cout << "Enter name of a student: ";
    cin >> name;
    cout << "Enter age of a student: ";
    cin >> age; 
    Student* s1 = new Student(name, age, 101, 'A');
    p = s1;
    p -> displayDetails();
    cout << "Salary: " << p -> calculateSalary() << endl;
    Student s2 = *s1;
    cout << "\nCopied Student Details: " << endl;
    s2.displayDetails();
    Teacher t("Mr. Arjun Singh", 34, 2001, "Math");
    cout << endl;
    t.displayDetails();
    cout << "Salary: " << t.calculateSalary() << endl;
    cout << "\nComparing ages: " << endl;
    compareAges(*s1, t);
    delete s1;
    return 0;
}