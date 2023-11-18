#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *array = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int sum = 0;

    try
    {
        for (int i = 0; i < n; i++)
        {
            if (array[i] > 0)
            {
                sum = sum + array[i];
            }
            else
            {
                throw i;
            }
        }
    }
    catch (int index)
    {
        cout << "Negative number found at index " << index << endl;
    }

    cout << "The sum is: " << sum << endl;

    delete[] array;

    return 0;
}
