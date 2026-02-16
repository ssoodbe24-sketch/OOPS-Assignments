#include <iostream>
using namespace std;
class Vehicle {
protected:
    string make;
    string model;
    int year;
public:
    void setVehicle(string m, string mo, int y) {
        make = m;
        model = mo;
        year = y;
    }
    void showVehicle() {
        cout << "Make  : " << make << endl;
        cout << "Model : " << model << endl;
        cout << "Year  : " << year << endl;
    }
};
class Truck : public Vehicle {
protected:
    float load_capacity;
public:
    void setTruck(float lc) {
        load_capacity = lc;
    }
    void showTruck() {
        showVehicle();
        cout << "Load Capacity : " << load_capacity << " tons" << endl;
    }
};
class RefrigeratedTruck : public Truck {
private:
    float temperature_control;
public:
    void setRefrigeratedTruck(float temp) {
        temperature_control = temp;
    }
    void showRefrigeratedTruck() {
        showTruck();
        cout << "Temperature Control : " << temperature_control << " °C" << endl;
    }
};
int main() {
    RefrigeratedTruck rt;
    rt.setVehicle("Volvo", "FH16", 2022);
    rt.setTruck(20);
    rt.setRefrigeratedTruck(-5);

    cout << "\n--- Refrigerated Truck Details ---\n";
    rt.showRefrigeratedTruck();
    return 0;
}
