#include <iostream>
using namespace std;

class A
{
    int a;
    string b;

public:
    A()
    {
        this->a = 0;
        this->b = "";
    }

    A(A *obj) // copy value from one object to another object by address/refference.
    {
        this->a = obj->a;
    }

    void set(int a)
    {
        this->a = a;
    }

    void get()
    {
        cout << "a = " << a << endl;
    }
};

int main()
{
    // A a1;
    // a1.set(10);

    // A b1(&a1);
    // b1.get();

    A *a = new A(); // allocate
    A *b = new A(); // allocate
    A *c = new A(); // allocate

    a->set(20);
    b->set(30);
    c->set(40);

    a->get();
    b->get();
    c->get();

    delete a, b, c; // release

    return 0;
}

// polymorphism
// abstracion.

