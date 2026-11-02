#include <iostream>
using namespace std;

// attributes and methods = member
// method = member function
// attribute = member variable

// static member
// array of object
// pointer object

// 1024 bytes = 1 killo byte
// 1024 kb = 1 mega byte

// an int variable- 4 bytes
// a char variable - 1 byte
// a bool variable - 1 byte
// a double variable - 8 bytes
// a string variable - 8 bytes

class Student
{

    int id, age, std;
    string name, school;
    double phone, percentage;
    char div;
    bool isPass;

public:
    Student(int id, int age, int std, string name, string school, double phone, double percentage, char div, bool isPass)
    {
        this->id = id;
        this->age = age;
        this->std = std;
        this->name = name;
        this->school = school;
        this->phone = phone;
        this->percentage = percentage;
        this->div = div;
        this->isPass = isPass;
    }

    Student()
    {
        cout << "Enter Student Detail ----" << endl
             << endl;
        cout << "Enter id : ";
        cin >> this->id;
        cout << "Enter name : ";
        cin >> this->name;
        cout << "Enter phone no : ";
        cin >> this->phone;
        cout << "Enter school name : ";
        cin >> this->school;
        cout << "Enter std : ";
        cin >> this->std;
        cout << "Enter div : ";
        cin >> this->div;
        cout << "Enter age : ";
        cin >> this->age;
        cout << "Enter percentage : ";
        cin >> this->percentage;
        cout << "Enter result status (true/false) : ";
        cin >> this->isPass;
    }

    void getStudent()
    {
        cout << endl
             << "--------------Student Detail---------------" << endl
             << endl;
        cout << "Id - " << this->id << endl;
        cout << "Name - " << this->name << endl;
        cout << "Phone No - " << this->phone << endl;
        cout << "School - " << this->school << endl;
        cout << "Std - " << this->std << endl;
        cout << "Div - " << this->div << endl;
        cout << "Age - " << this->age << endl;
        cout << "Percentage - " << this->percentage << endl;
        if (isPass == true || isPass == 1)
        {
            cout << "Result - Pass" << endl
                 << endl;
        }
        else
        {
            cout << "Result - Failed" << endl
                 << endl;
        }
    }
};

int main()
{

    return 0;
}
