#include <iostream>
using namespace std;
int main()
{
    int num, den;
    cin >> num >> den;
    try
    {
        if (den == 0)
        {
            throw("Divide by Zero Exception");
        }

        int result = num / den;
        cout << result << endl;
    }
    catch (const char e[50])
    {
        cout << e << endl;
    }
    return 0;
}