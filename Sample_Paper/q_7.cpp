// Q7. Develop a program in C++ which takes a sentence as an input from user and displays those words having even length.
#include <iostream>
using namespace std;
int main()
{
    string line;
    getline(cin, line);
    string l = "";
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == ' ')
        {
            if (l.length() % 2 == 0)
            {
                cout << l << " ";
                l = "";
            }
            else
            {
                l = "";
            }
        }
        else
        {
            l = l + line[i];
        }
    }
    if (l.length() % 2 == 0)
    {
        cout << l;
    }
    return 0;
}