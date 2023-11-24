#include <iostream>
#include <string>
using namespace std;

template <class T>
class templates
{
public:
    T *array;
    int size;
    templates(T arr[], int s) : array(arr), size(s) {}
    T display()
    {

        for (int i = 0; i < size; i++)
        {
            if (i % 2 == 0)
            {
                cout << array[i] << " ";
            }
        }
        cout << endl;
    }
};
int main()
{
    int N, arr[N];
    string fruits[N];
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> fruits[i];
    }
    templates<int> obj(arr, N);
    obj.display();
    templates<string> obj2(fruits, N);
    obj2.display();
    return 0;
}