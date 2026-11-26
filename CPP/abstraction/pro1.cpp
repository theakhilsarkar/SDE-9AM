// data abstraction - is principle to hide essential/important information from the user and display only necessary data.

// by access modifier. - public, private, protected

// public - access everywhere
// protected - access in classa nd inherited class.
// private - only access in same class.

// public < protected < private

// keep all attributes private and methods public.
// to access individual attributes value create saprate getter.

// virtual function

#include <iostream>
using namespace std;

// class A
// {
//     int a = 300;

// public:
//     virtual void get()
//     {
//         cout << "a = " << a << endl;
//     }
// };

// class B : public A
// {
//     int a = 200;

// public:
//     void get()
//     {
//         cout << "a = " << a << endl;
//     }
// };

class RBI
{
public:
    // pure virtual function - all inherited class of this class must have to create this function.
    virtual void govGuidelines() = 0;
    // we can control behavior of child class by parent class using pure virtual function.
};

class SBI : public RBI
{
public:
    void sbiGuidelines()
    {
    }
    void govGuidelines()
    {

    }
};

// framework , library = oop

// oop,dsa

int main()
{
    SBI s1;
    return 0;
}

// wap to demonstrate use of virtual keyword.