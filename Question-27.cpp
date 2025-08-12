#include <iostream>
#include <string>
using namespace std;

class Visitor{
    private:
        string visitorName;
        int visitorNumber;
        string contactDetails;
        static int visitorCount;
    public:
        Visitor(string name, int number, string contact){
            visitorName = name;
            visitorNumber = number;
            contactDetails = contact;
            visitorCount++;
        }
        void display() const {
            cout << "Visitor Name: " << visitorName << endl;
            cout << "Visitor Number: " << visitorNumber << endl;
            cout << "Contact Details: " << contactDetails << endl;
        }
        static void displayVisitorCount(){
            cout << "Total Number of Visitors: " << visitorCount << endl;
        }
};
int Visitor::visitorCount = 0;
int main(){
    Visitor v1("Amit Singh", 2008, "amit88@gmail.com");
    Visitor v2("Rza Mohommed", 2005, "rza345@gmail.com");
    Visitor v3("Simmi Tomar", 2007, "simmi23@gmail.com");
    Visitor v4("Akshat Mehta", 2006, "akshat45@gmail.com");
    cout << "Details of Visitor 1: " << endl;
    v1.display();
    cout << "\nDetails of Visitor 2: " << endl;
    v2.display();
    cout << "\nDetails of Visitor 3: " << endl;
    v3.display();
    cout << "\nDetails of Visitor 4: " << endl;
    v4.display();
    cout << "\nVisitors Count: " << endl;
    Visitor::displayVisitorCount();
    return 0;
}