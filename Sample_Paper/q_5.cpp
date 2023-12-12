// Q5. Develop a program to swap the values of two variables a and b by using call by reference mechanism in C++.

#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
};
int main()
{
    int x, y;
    cin >> x >> y;
    cout << x << " " << y << endl;
    swap(x, y);
    cout << x << " " << y << endl;
    return 0;
}