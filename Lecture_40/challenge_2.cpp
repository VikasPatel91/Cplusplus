#include <iostream>
#include <vector>

using namespace std;
template <class T>
T dotProduct(const vector<T> &v1, const vector<T> &v2, int n)
{
    T result = 0;
    for (int i = 0; i < n; ++i)
    {
        result += v1[i] * v2[i];
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v1(n), v2(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> v2[i];
    }
    vector<double> v3(n), v4(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v3[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> v4[i];
    }

    int intDotProduct = dotProduct(v1, v2, n);
    double floatDotProduct = dotProduct(v3, v4, n);
    cout << "Dot product of integer vectors: " << intDotProduct << endl;
    cout << "Dot product of floating-point vectors: " << floatDotProduct << endl;

    return 0;
}
