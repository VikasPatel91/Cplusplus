#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isComposite(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    try
    {
        int n;
        cin >> n;

        if (n < 1 || n > 15)
        {
            throw -1;
        }

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        vector<int> compositeNumbers;
        remove_copy_if(a.begin(), a.end(), back_inserter(compositeNumbers), [](int x)
                       { return !isComposite(x); });

        cout << "Composite numbers:";
        for (int num : compositeNumbers)
        {
            cout << " " << num;
        }
        cout << endl;
    }
    catch (const int in)
    {
        cout << in;
    }

    return 0;
}
