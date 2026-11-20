// polymorphism
// poly - multiple
// morphism - form(different side/face/type)

// this principle used to create same methods with different behavior(process).

// 1. method overloading - we overload work from methods by creating multiple same name methods.
// -> you can create multiple function with same name.
// -> parameter count must be different.

// 2. method overriding

// 3. operator overloading

// virtual function

// abstraction
// pure virtual function
//

#include <iostream>
using namespace std;

// 1. method overloading
class Math
{

public:
    void sum(int a, int b)
    {
        cout << a + b << endl;
    }

    void sum(int a, int b, int c)
    {
        cout << a + b + c << endl;
    }

    void sum(int a, int b, int c, int d)
    {
        cout << a + b + c + d << endl;
    }
};

// method overriding - child class' method overrides parent class method.
// inheritance required
// parent's and child's both method's name and parameter can same but class different and parent child.

class Parent
{
public:
    void greet()
    {
        cout << "Hello Welcome !!" << endl;
    }
};

class Child : public Parent
{
public:
    void greet()
    {
        cout << "Hello Whatsup !!" << endl;
    }
};

int main()
{
    Child c1;
    c1.greet();

    return 0;
}
