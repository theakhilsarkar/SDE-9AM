#include <iostream>
using namespace std; // here we declare globar std object to not mention everytime in in and output lines.

int main()
{
    int age;

    cout << "Enter your age : ";
    cin >> age;

    cout << endl
         << "Age is " << age;

    if (age >= 18)
    {
        cout << "eligible for vote !";
    }
    else
    {
        cout << "not eligible for vote !";
    }
}

// 30-50 - if,for,array...