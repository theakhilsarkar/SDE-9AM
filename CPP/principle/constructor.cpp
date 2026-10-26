#include <iostream>
using namespace std;

// constructor - is one type of special method which call automatically when object created.
// constructor has not any return type.
// constructor only made by same class name.
// variable initialization

// types of constructor
// 1. default constructor
// 2. parameterized constructor

// destructor - end

class A
{
    int a;

public:
    A()
    {
        cout << "constructor called !" << endl;
    }

    A(int a)
    {
        this->a = a;
    }

    void get()
    {
        cout << this->a << endl;
    }
    ~A()
    {
        cout << "destructor called !" << endl;
    }
};

int main()
{
    A a1(30);

    a1.get();

    return 0;
}

// wap to create a Car class and minimum 5 attributes, also create methods to set and get data.

class Car
{

    int modelNo;
    double price;
    string color;
    string modelName;
    string companyName;
    bool isEV;

public:
    Car()
    {
        cout << "Welcome to Janta Garage !" << endl;
    }
    Car(int modelNo, double price, string color, string modelName, string companyName, bool isEV)
    {
        this->modelName = modelName;
        this->modelNo = modelNo;
        this->price = price;
        this->color = color;
        this->companyName = companyName;
        this->isEV = isEV;
    }

    void getCar()
    {
        cout
            << "model no - " << modelNo << endl;
        cout << "model name - " << modelName << endl;
        cout << "model company name - " << companyName << endl;
        cout << "model company color - " << color << endl;
        cout << "model is ev? - " << isEV << endl;
        cout << "model price - " << price << endl;

        cout << endl;
    }

    ~Car()
    {
        cout << "Thanks for visit us !" << endl;
    }
};

// wap to create a Employee class and minimum 5 attributes, also create methods to set and get data.
// wap to create a Student class and minimum 5 attributes, also create methods to set and get data.
// wap to convert inches into feet using classa nd object
// wap to convert seconds into hh:mm:ss using class and object.
