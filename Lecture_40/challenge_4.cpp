#include <iostream>
#include <vector>

using namespace std;

int main()
{
    try
    {
        vector<int> arr = {11, 21, 33, 14, 41, 60, 13, 8, 25, 50};

        int n;
        cin >> n;

        if (n < 1 || n > 10)
        {
            throw -1;
            return 1; 
        }
        auto nthElementIterator = arr.begin() + (n - 1);
        int baseNumber = *nthElementIterator;

        for (int i = 1; i <= 10; ++i)
        {
            cout << baseNumber << " * " << i << " = " << (baseNumber * i) << endl;
        }
    }
    catch (const int in)
    {
        cout << in << '\n';
    }

    return 0; 
}
