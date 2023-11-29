#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n > 15)
    {
        cout << -1 << endl;
        return 0;
    }

    list<int> startingBids;

    for (int i = 0; i < n; ++i)
    {
        int bid;
        std::cin >> bid;
        startingBids.push_back(bid);
    }

    startingBids.sort();
    startingBids.unique();

    int sum = 0;
    for (int bid : startingBids)
    {
        sum += bid;
    }

    // Output
    cout << "Sum of unique elements: " << sum << endl;

    return 0;
}