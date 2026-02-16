#include <iostream>
using namespace std;
class Speedometer {
protected:
    int speed;
public:
    Speedometer() {
        speed = 0;
    }
    void setSpeed(int s) {
        speed = s;
    }
    void showSpeed() {
        cout << "Speed       : " << speed << " km/h" << endl;
    }
};
class FuelGauge {
protected:
    float fuel;
public:
    FuelGauge() {
        fuel = 0.0;
    }
    void setFuel(float f) {
        fuel = f;
    }
    void showFuel() {
        cout << "Fuel Level  : " << fuel << " liters" << endl;
    }
};
class Thermometer {
protected:
    float temperature;
public:
    Thermometer() {
        temperature = 0.0;
    }
    void setTemperature(float t) {
        temperature = t;
    }
    void showTemperature() {
        cout << "Temperature : " << temperature << " °C" << endl;
    }
};
class CarDashboard : public Speedometer, public FuelGauge, public Thermometer {
public:
    void displayDashboard() {
        cout << "\n--- Car Dashboard ---" << endl;
        showSpeed();
        showFuel();
        showTemperature();
    }
};
int main() {
    CarDashboard car;
    car.setSpeed(80);
    car.setFuel(12.5);
    car.setTemperature(90.0);
    car.displayDashboard();
    return 0;
}
