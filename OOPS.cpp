#include <iostream>
using namespace std;

class Vehicle {
protected:
    string make, model;
    int year;

public:
    Vehicle(string mk, string md, int yr) {
        make = mk;
        model = md;
        year = yr;
    }

    virtual void display() = 0;
};

class GasCar : public Vehicle {
    int fuel;

public:
    GasCar(string mk, string md, int yr, int f)
        : Vehicle(mk, md, yr), fuel(f) {}

    void display() {
        cout << "\n[Gas Car]\n"
             << make << " " << model << " (" << year << ")\n"
             << "Fuel: " << fuel << " Liters\n";
    }
};

class ElectricVehicle : public Vehicle {
    int battery;

public:
    ElectricVehicle(string mk, string md, int yr, int b)
        : Vehicle(mk, md, yr), battery(b) {}

    void display() {
        cout << "\n[Electric Vehicle]\n"
             << make << " " << model << " (" << year << ")\n"
             << "Battery: " << battery << " kWh\n";
    }
};

int main() {
    GasCar g("Honda", "City", 2020, 45);
    ElectricVehicle e("Tesla", "Model 3", 2022, 75);

    g.display();
    e.display();

    return 0;
}