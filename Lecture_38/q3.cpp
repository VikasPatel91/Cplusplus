#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int n = num / 100;
    int sum = 0;
    try
    {
        if (n > 0 && n < 10)
        {
            int n1, n2, n3;
            n1 = n;
            n2 = num / 10 % 10;
            n3 = num % 10;
            sum = n1 + n2 + n3;
            cout << "Sum of the digits is " << sum;
        }
        else
        {
            throw n;
        }
    }
    catch (int a)
    {
        cout << "It's not a three digit Number or valid number";
    }
}