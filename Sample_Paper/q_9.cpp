// Q9. Develop a program to demonstrate the use of operator overloading by overloading unary increment (++) and unary decrement (-) operators inside a class.

#include <iostream>
using namespace std;
class A
{
    int a = 10;

public:
    A operator++()
    {
        ++a;
    }
    A operator--()
    {
        --a;
    }
    void display()
    {
        cout << "a = " << a << endl;
    }
};

int main()
{
    A obj;
    obj.display();
    ++obj;
    obj.display();
    --obj;
    obj.display();
    return 0;
}