// Q2. Develop a program to demonstrate multilevel inheritance in three classes "CEO", "Manager" and "Employee" Display the
// properties of both "CEO" and "Manager" class by using the bottom most child class "Employee" object.

#include <iostream>
using namespace std;
class ceo
{
protected:
    int x = 100;

public:
};
class manager
{
protected:
    int y = 200;

public:
};
class employee : public ceo, public manager
{
public:
    void display()
    {
        cout << x << " " << y << endl;
    }
};
int main()
{
    employee obj;
    obj.display();
    return 0;
}