#include <iostream>
using namespace std;

// attributes and methods = member
// method = member function
// attribute = member variable

// static member = static member are common for all objects by value and space.
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
    string name;
    double phone, percentage;
    char div;
    bool isPass;

public:
    static string school; // static variable only declared in the class, do not assign value

    // Student()
    // {
    //     cout << "Enter Student Detail ----" << endl
    //          << endl;
    //     cout << "Enter id : ";
    //     cin >> this->id;
    //     cout << "Enter name : ";
    //     cin >> this->name;
    //     cout << "Enter phone no : ";
    //     cin >> this->phone;
    //     cout << "Enter school name : ";
    //     cin >> this->school;
    //     cout << "Enter std : ";
    //     cin >> this->std;
    //     cout << "Enter div : ";
    //     cin >> this->div;
    //     cout << "Enter age : ";
    //     cin >> this->age;
    //     cout << "Enter percentage : ";
    //     cin >> this->percentage;
    //     cout << "Enter result status (true/false) : ";
    //     cin >> this->isPass;
    // }

    void setStudent(int id, int age, int std, string name, double phone, double percentage, char div, bool isPass)
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

string Student::school = "abc school"; // static variable  values assigning

int main()
{

    // pointer variable = are used to store memory address of another variable.
    // pointer object = are used to store memory address of another object.

    Student s[3]; // 8 byte save

    s[0].setStudent(101, 17, 12, "kunjan", 7896541200, 78.36, 'C', true);
    s[1].setStudent(102, 16, 12, "raj", 8896541200, 68.36, 'D', true);
    s[2].setStudent(103, 15, 10, "mohan", 9896541200, 48.36, 'F', false);

    Student *ptr = &s[0];

    ptr->setStudent(102, 16, 12, "raj", 8896541200, 68.36, 'D', true);

    s[0].getStudent();

    return 0;
}
