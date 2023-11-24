#include <iostream>
using namespace std;

template <class T>
T arraySum(T arr[], int n)
{
    T sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

template <>
float arraySum<float>(float arr[], int n)
{
    float sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int s;
    cin >> s;

    int arr[s];
    float arr2[s];

    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < s; i++)
    {
        cin >> arr2[i];
    }

    int sumInt = arraySum(arr, s);
    float sumFloat = arraySum(arr2, s);

    cout << "Sum of integer array: " << sumInt << endl;
    cout << "Sum of floating-point array: " << sumFloat << endl;

    return 0;
}
