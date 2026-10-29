// #include <iostream>
// using namespace std;

// // 5. hybrid
// // class A
// // {
// // public:
// //     int a = 10;
// // };

// // class B : public A
// // {
// // public:
// //     int b = 20;
// // };

// // class C : public A
// // {
// // public:
// //     int c = 30;
// // };

// // class D : public B, public C
// // {
// // public:
// //     int d = 40;
// //     void get()
// //     {
// //         cout << "a = " << C::a << endl; // we used scop resolution operator to specify attribute a comes from class C.
// //         cout << "b = " << b << endl;
// //         cout << "c = " << c << endl;
// //         cout << "d = " << d << endl;
// //     }
// // };

// // scop resolution operator - ::

// // protected: in class and inherited class. not outside the class.
// //

// // private > protected > public

// // public -> public -> public
// // public -> private -> private
// // public -> protected -> protected

// // private -> public -> private
// // private -> protected -> private
// // private -> private -> private

// // protected -> public -> protected
// // protected -> private -> private
// // protected -> protected -> protected

// class A
// {
// public:
//     int a = 10;

// private:
//     int b = 20;

// protected:
//     int c = 30;
// };

// class B : protected A
// {
//     void get()
//     {
//         cout << a << endl;
//         cout << b << endl;
//         cout << c << endl;
//     }
// };

// class C : public B
// {
//     void get()
//     {
//         cout << a << endl;
//         cout << b << endl;
//         cout << c << endl;
//     }
// };

// int main()
// {
//     A a1;
//     a1.a;

//     B b1;
//     b1.a;
//     return 0;
// }

// Q.1 Write a Program to print the rate of interest of different banks using hierarchical inheritance:
// - Class RBI -> Class SBI
// - Class RBI -> Class BOB
// - Class RBI -> Class ICICI
// - inherit rate attribute and getROI() method in all child
// classes

#include <iostream>
using namespace std;

class RBI
{
protected:
    float rate;

public:
    void getROI()
    {
        cout << "rate - " << this->rate << endl;
    }
};

class SBI : public RBI
{
public:
    void setRate(float rate)
    {
        this->rate = rate;
    }
};

class BOB : public RBI
{
public:
    void setRate(float rate)
    {
        this->rate = rate;
    }
};
class ICICI : public RBI
{
public:
    void setRate(float rate)
    {
        this->rate = rate;
    }
};

int main()
{
    SBI sbi;
    sbi.setRate(6.7);

    BOB bob;
    bob.setRate(7.8);

    ICICI icici;
    icici.setRate(6.9);

    sbi.getROI();
    bob.getROI();
    icici.getROI();

    return 0;
}