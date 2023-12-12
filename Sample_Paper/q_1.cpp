// Q1.Develop a program to demonstrate the use of abstract class and pure virtual function in C++.
#include <iostream>
using namespace std;
class a
{
public:
    virtual void display() = 0;
};
class b : public a
{
public:
    void display() override
    {
        cout << "display b" << endl;
    };
};
class c : public a
{
public:
    void display() override
    {
        cout << "display c" << endl;
    };
};
int main()
{
    b banc;
    c cute;
    a *ap = &banc;
    a *app = &cute;
    ap->display();
    app->display();
    return 0;
} // 1st question