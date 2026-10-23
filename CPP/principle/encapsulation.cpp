
// access modifier - its used to modify access
// public: -> methods and attributes bellow public access modifier will be accessible in and outside of the class.
// private: -> methods and attributes bellow private access modifier will be accessible only inside the class not outside the class.

// local variable - declared in function
// global variable - declared in class
// when local and global name are same, compiler confuse...

// 'this' keyword - it used to represent global variable.
// use this keyword while use global variable inside the class.


// OOP
// oop have main 4 fundamental principles.
// 1. encapsulation
// 2. inheritance
// 3. polymorphism
// 4. abstraction

// data/attributes/value/information/variable
// method,process,logic,task,functions

// data encapsulation -
// in .... we bind data and process into two different (imaginory) block/entity.

// declare attributes and methods saprately in class.
// keep data private and process public.

#include <iostream>
using namespace std;

// class A
// {
// private:
//     int a;

// public:
//     void set(int a)
//     {
//         this->a = a;
//     }
//     void get()
//     {
//         cout << "a = " << this->a << endl;
//     }
// };

class ATM
{

    int balance = 1000;

public:
    void deposit(int balance)
    {
        this->balance += balance;
    }

    void withdraw(int balance)
    {
        this->balance -= balance;
    }

    void checkBalance()
    {
        cout << "Current balance = " << this->balance << endl;
    }
};

int main()
{
    ATM a1;
    a1.checkBalance();
    a1.deposit(4000);
    a1.checkBalance();
    a1.withdraw(2000);
    a1.checkBalance();

    // A a1;
    // a1.set(20);
    // a1.get();
    return 0;
}

// wap to create a Car class and minimum 5 attributes, also create methods to set and get data.
// wap to create a Employee class and minimum 5 attributes, also create methods to set and get data.
// wap to create a Student class and minimum 5 attributes, also create methods to set and get data.
// wap to convert inches into feet using classa nd object
// wap to convert seconds into hh:mm:ss using class and object.
