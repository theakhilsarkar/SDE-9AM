#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    void set(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void get()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << endl;
    }

    A operator+(A a2)
    {
        A a3;                         // temp
        a3.a = (this->a * 10) + a2.a; // 11
        a3.b = (this->b * 10) + a2.b; // 22
        return a3;
    }
};

int main()
{

    A a1;
    a1.set(1, 2);

    A a2;
    a2.set(1, 2);

    A a3 = a1 + a2; // a1.operator+(a2);

    a3.get();

    return 0;
}
