#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
void highScore(T array[], int s)
{
    sort(array, array + s);
    for (int i = 0; i < s; i++)
    {
        if (i == s - 1)
        {
            cout << array[i] << " " << array[i - 1];
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    float arr2[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    highScore(arr, n);
    highScore(arr2, n);

    return 0;
}
