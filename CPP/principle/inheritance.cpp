#include <iostream>
using namespace std;

// inheritance - used to share data & logic from one class to another class.
// we can connect one class to another class.
// parent class = base class = super class
// child class  = derived class = sub class

// parent class share methods and attributes to their child class.
// types of inheritance

// 1. simple inheritance
// -> single parent, single child
// -> when one class connect to another one class .....
// -> A -> B

/*

class A
{
public:
    int a = 10;
    void getA()
    {
        cout << "a = " << a << endl;
    }
};

class B : public A
{
public:
    int b = 20;
    void getB()
    {

        cout << "b = " << b << endl;
    }
};

*/

// 2. multilevel inheritance
// -> multi parent, multi child
// -> when one class conect to another one and that one connect to another second class....
// -> A -> B -> C -> D ....
/*
    class A
{
public:
    int a = 10;
    void getA()
    {
        cout << "a = " << a << endl;
    }
};

class B : public A
{
public:
    int b = 20;
    void getB()
    {

        cout << "b = " << b << endl;
    }
};

class C : public B
{
public:
    int c = 30;
    void getC()
    {

        cout << "c = " << c << endl;
    }
};

*/

// 3. multiple inheritance
// -> multi parent , single child
// -> when multiple class inherit/connect to single class...
// -> A -> Z, B -> Z, C -> Z
/*

class A
{
public:
    int a = 10;
    void getA()
    {
        cout << "a = " << a << endl;
    }
};

class B
{
public:
    int b = 20;
    void getB()
    {

        cout << "b = " << b << endl;
    }
};

class C : public A, public B
{
public:
    int c = 30;
    void getC()
    {

        cout << "c = " << c << endl;
    }
};

*/

// 4. hierachical inheritance
// -> single parent, multi child
// -> when single class inherit to multiple class ....
// -> A -> B, A -> C, A -> D
/*class A
{
public:
    int a = 10;
    void getA()
    {
        cout << "a = " << a << endl;
    }
};

class B : public A
{
public:
    int b = 20;
    void getB()
    {

        cout << "b = " << b << endl;
    }
};

class C : public A
{
public:
    int c = 30;
    void getC()
    {

        cout << "c = " << c << endl;
    }
};*/

// 5. hybrid inheritance
// -> combination of two or more inheritance.
// -> A -> B -> C, B -> D, C -> E, D -> E

// class A
// {
// public:
//     int a = 10;
//     void getA()
//     {
//         cout << "a = " << a << endl;
//     }
// };

// class B : public A
// {
// public:
//     int b = 20;
//     void getB()
//     {

//         cout << "b = " << b << endl;
//     }
// };

// class C : public A
// {
// public:
//     int c = 30;
//     void getC()
//     {

//         cout << "c = " << c << endl;
//     }
// };
// class D : public C, public B
// {
// public:
//     int d = 40;
//     void getD()
//     {

//         cout << "d = " << d << endl;
//     }
// };

int main()
{

    return 0;
}