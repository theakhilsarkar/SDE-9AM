#include <iostream>
using namespace std;

class Vehicle
{
    int vehicleId, year;
    string model, manufacturer;
    static int totalVehicles;

public:
    Vehicle() // constructor is used to initialize variable.
    {
        this->vehicleId = 0;
        this->year = 0;
        this->model = "";
        this->manufacturer = "";
    }
    ~Vehicle()
    {
        // cout << "Vehicle object Destroyed ..." << endl;
        totalVehicles--;
    }

    int getVehicleID()
    {
        return this->vehicleId;
    }
    void insertVehicle() // setter
    {
        cout << endl;
        cout << "Enter your vehicle id - ";
        cin >> this->vehicleId;
        cout << "Enter your vehicle model - ";
        cin >> this->model;
        cout << "Enter your vehicle manufacturer - ";
        cin >> this->manufacturer;
        cout << "Enter your vehicle year - ";
        cin >> this->year;
        cout << endl;
    }
    void displayVehicle() // getter
    {
        cout << endl;
        cout << "Vehicle ID - " << this->vehicleId << endl;
        cout << "Vehicle Model - " << this->model << endl;
        cout << "Vehicle Manufacturer - " << this->manufacturer << endl;
        cout << "Registration Year - " << this->year << endl;
        cout << endl;
    }
};

class Car : public Vehicle
{
    string fuelType;
};

class ElectricCar : public Car
{
    int batteryCapacity;
};
class SportsCar : public ElectricCar
{
    int topSpeed;
};
class SUV : public Car
{
};
class Sedan : public Car
{
};

class AirCraft : public Vehicle
{
    int flightRange;
};

class FlyingCar : public AirCraft, public Car
{
};

class VehicleRegistry
{
    Vehicle v1[50];
    int currentIndex = 0;

public:
    void addVehicle()
    {
        v1[currentIndex].insertVehicle();
        currentIndex++;
    }
    void displayAllVehicles()
    {
        cout << "----------------------------------------" << endl;
        for (int i = 0; i < currentIndex; i++)
        {
            v1[i].displayVehicle();
        }
        cout << "----------------------------------------" << endl;
    }

    void searchVehicle()
    {
        int id;
        cout << "Enter Vehicle ID - ";
        cin >> id;
        for (int i = 0; i < currentIndex; i++)
        {
            if (id == v1[i].getVehicleID())
            {
                v1[i].displayVehicle();
            }
        }
    }
};

int main()
{
    VehicleRegistry v1;
    int choice;
    bool isOn = true;

    cout << "Welcome to Vehicle Registry System" << endl;

    do
    {
        cout << "Enter 1 to add vehicle." << endl;
        cout << "Enter 2 to display all vehicle." << endl;
        cout << "Enter 3 to search vehicle by id." << endl;
        cout << "Enter 4 to exit." << endl;
        cout << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            v1.addVehicle();
            break;
        case 2:
            v1.displayAllVehicles();
            break;
        case 3:
            v1.searchVehicle();
            break;
        case 4:
            isOn = false;
            cout << "Program Exited !" << endl;
            break;

        default:
            cout << "Enter valid input !";
            break;
        }
    } while (isOn);

    return 0;
}

// pr3 -
// pr4 - diagram -