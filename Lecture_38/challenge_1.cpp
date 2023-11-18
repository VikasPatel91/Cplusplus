#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    try
    {
        string email;
        cin >> email;
        int len = email.length();
        string check = "";
        int start = len - 10;
        for (int i = start; i < len; i++)
        {
            check = check + email[i];
        }
        if (check == "@gmail.com")
        {
            cout << "Email Id is Valid.";
        }
        else
        {
            throw("Invalid Email Id!!!");
        }
    }
    catch (const char e[50])
    {
        cout << "Exception Caught..." << endl;
        cout << e << endl;
    }
    return 0;
}