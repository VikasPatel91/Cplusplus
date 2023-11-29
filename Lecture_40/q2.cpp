#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    string text;
    char ch;
    getline(cin, text);  
    cin >> ch;

    int count = count_if(text.begin(), text.end(), [ch](char c) {
        return c != ch;
    });

    cout << count << endl;

    return 0;
}
