#include <iostream>
using namespace std;
int main()
{
    try
    {
        int age;
        cin >> age;
        if (age >= 18)
        {
            cout << "YES, you are old enough." << endl;
        }
        else
        {
            throw age;
        }
    }
    catch (const int a)
    {
        cout << "No, You must be at least 18 years old" << endl;
        cout << "Current Age is : " << a << endl;
    }

    return 0;
}
