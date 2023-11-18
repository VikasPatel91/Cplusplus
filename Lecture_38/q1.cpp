#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    try
    {
        if (n > 0)
        {
            cout << "You Entered Positive number";
        }
        else if (n < 0)
        {
            cout << "You Entered Negative Number";
        }
        else if (n == 0)
        {
            cout << "You Entered Zero";
        }
        else
        {
            throw n;
        }
    }
    catch (int a)
    {
        cout << "Invalid Number" << a;
    }
}
