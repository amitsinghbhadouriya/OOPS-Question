#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    private:
        string make, model;
        int year;
        double mileage;
    public:
        void setMake(string m) {
            make = m;
        }
        void setModel(string m) {
            model = m;
        }
        void setYear(int y) {
            year = y;
        }
        void setMileage(double m) {
            mileage = m;
        }
        string getMake() const {
            return make;
        }
        string getModel() const {
            return model;
        }
        int getYear() const {
            return year;
        }
        double getMileage() const{
            return mileage;
        }
        void displayDetails() const{
            cout << "Make: " << make << endl;
            cout << "Model: " << model << endl;
            cout << "Year: " << year << endl;
            cout << "Mileage: " << mileage << "km" << endl;
        }
};
class Car: public Vehicle {};
class Bike: public Vehicle {};
class Bus: public Vehicle {};
int main() {
    Car car;
    Bike bike;
    Bus bus;
    car.setMake("Mahindra");
    car.setModel("XUV 700");
    car.setYear(2025);
    car.setMileage(25000.5);
    bike.setMake("Suzuki");
    bike.setModel("Gixxer SF 250");
    bike.setYear(2024);
    bike.setMileage(35000);
    bus.setMake("Tata");
    bus.setModel("Starbus");
    bus.setYear(2023);
    bus.setMileage(10000);
    cout << "\n**** Car Details ****" << endl;
    car.displayDetails();
    cout << "\n**** Bike Details ****" << endl;
    bike.displayDetails();
    cout << "\n**** Bus Details ****" << endl;
    bus.displayDetails();
    return 0;
}