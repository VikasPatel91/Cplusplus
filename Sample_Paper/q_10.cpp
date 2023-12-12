// Q10. Develop a program to demonstrate the use of friend function to access the private data members of one class into other class.

#include <iostream>
using namespace std;
class A
{
    int a = 100;
    friend int show();
};

int show()
{
    A ob;
    return ob.a;
}

class B
{
public:
    void display()
    {
        cout << show();
    }
};

int main()
{
    B ob;
    ob.display();
    return 0;
}