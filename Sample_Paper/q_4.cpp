// Q4. Develop a program to demonstrate the concept of overloading of constructors by using the concept of class and objects.
#include <iostream>
using namespace std;
class A
{
public:
    int x;
    A()
    {
        x = 7;
    };
    A(int a) : x(a){};
    A(float a) : x(a){};
    void Display()
    {
        cout << "x: " << x << endl;
    }
};
int main()
{
    int a = 5;
    float b = 10;
    A obj;
    obj.Display();
    A obj2(a);
    obj2.Display();
    A obj3(b);
    obj3.Display();
    return 0;
}