#include <iostream>
using namespace std;

template <typename T>
void templateArr(T *arr1, T *arr2, int size)
{
    T *result = new T[size];
    for (int i = 0; i < size; i++)
    {
        result[i] = arr1[i] + arr2[i];
    }

    cout << "Concatenated array:";
    for (int i = 0; i < size; i++)
    {
        cout << " " << result[i];
    }
    cout << endl;

    delete[] result;
}
template <typename T>
void templateStr(T str1, T str2, T delimiter)
{
    T result = str1 + delimiter + str2;
    cout << "Concatenated string: " << result << endl;
}

int main()
{
    int arr1[3], arr2[3];
    string s1, s2, delimiter;

    for (int i = 0; i < 3; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> arr2[i];
    }

    cin >> s1 >> s2 >> delimiter;

    templateArr(arr1, arr2, 3);
    templateStr(s1, s2, delimiter);

    return 0;
}
