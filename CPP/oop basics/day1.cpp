#include <iostream>
using namespace std;

// OOP - object oriented programming
// oop is the way of programming where we perform task by creating class and objects.
// by oop we can make our code...
//    1. structurize and organize
//    2. reuseable
//    3. more control over logic and data
//    4. more secure

// class
// class is a blueprint to create an object.
// class is the collection of methods and attributes.
// class is used to store logic and data in blueprint way.
// class is one type of user define datatype.

// object
// object is an instance/representative of the class.
// object is used to access methods and attributes declared in the class.
// it can be multiple objects of the same class.

// method = function
// attribute = variable

// method - function declared in the class called method.
// method is used to store logic/process.

// attribute - variable declared in the class called attribute.
// attribute is used to store data.

class Car
{
public:
    int modelNo;
    double price;
    string color;
    string modelName;
    string companyName;
    bool isEV;

    void setCar(int mno, double prc, string clr, string mname, string cname, bool isev)
    {
        modelNo = mno;
        modelName = mname;
        price = prc;
        color = clr;
        companyName = cname;
        isEV = isev;
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
};

int main()
{
    Car a, b, c, e, f;

    a.setCar(123, 890000, "red", "GLA399", "Benz", false);
    b.setCar(344, 7945000, "black", "RA99", "Max", true);
    c.setCar(25, 5945000, "white", "Y7", "Cross", false);

    a.getCar();
    b.getCar();
    c.getCar();

    return 0;
}

// wap to create a Car class and minimum 5 attributes, also create methods to set and get data.
// wap to create a Employee class and minimum 5 attributes, also create methods to set and get data.
// wap to create a Student class and minimum 5 attributes, also create methods to set and get data.
// wap to convert inches into feet using classa nd object
// wap to convert seconds into hh:mm:ss using class and object.
