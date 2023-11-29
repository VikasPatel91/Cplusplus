#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> convert_to_rank(const vector<int> &arr)
{
    vector<pair<int, int>> indexed_arr;
    for (int i = 0; i < arr.size(); ++i)
    {
        indexed_arr.push_back({arr[i], i});
    }

    sort(indexed_arr.begin(), indexed_arr.end());

    vector<int> converted_arr(arr.size());
    for (int new_rank = 0; new_rank < arr.size(); ++new_rank)
    {
        int old_index = indexed_arr[new_rank].second;
        converted_arr[old_index] = new_rank;
    }

    return converted_arr;
}

int main()
{

    try
    {
        int n;
        cin >> n;
        if (n <= 0)
        {
            throw -1;
        }

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        cout << "Input Array: ";
        for (int i = 0; i < n; ++i)
        {
            cout << arr[i] << " ";
        }

        vector<int> converted_arr = convert_to_rank(arr);
        cout << endl
             << "Converted Array: ";
        for (int i = 0; i < n; ++i)
        {
            cout << converted_arr[i] << " ";
        }
    }
    catch (int in)
    {
        cout << in;
    }

    return 0;
}