#include <iostream>
using namespace std;

template <class T1, class T2>
class Pair
{
private:
    T1 first;
    T2 second;

public:
    Pair(T1 a, T2 b) : first(a), second(b) {}

    void swap()
    {
        T1 temp = first;
        first = second;
        second = temp;
    }

    void displayBeforeSwap() const
    {
        cout << "Values before swap: \n";
        cout << "First: " << first << "\n";
        cout << "Second: " << second << "\n";
    }

    void displayAfterSwap() const
    {
        cout << "Values after swap: \n";
        cout << "First: " << first << "\n";
        cout << "Second: " << second << "\n";
    }
};

int main()
{
    float a;
    double b;
    cin >> a;
    cin >> b;
    Pair<float, double> pair(a, b);
    pair.displayBeforeSwap();
    pair.swap();
    pair.displayAfterSwap();
    return 0;
}
