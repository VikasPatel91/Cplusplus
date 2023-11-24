#include <iostream>
#include <cctype>
using namespace std;
template <typename T>
void convertString(T &l, char c)
{
    if (c == 'U')
    {
        cout << "Uppercase string: ";
        for (char &c : l)
        {
            c = toupper(c);
            cout << c;
        }
    }
    else if (c == 'L')
    {
        cout << "Lowercase string: ";
        for (char &c : l)
        {
            c = tolower(c);
            cout << c;
        }
    }
}
template <typename T>
void convertFirstLetterToUpper(T &l, char c)
{
    cout << "String with first letter of each word capitalized: ";

    bool newWord = true;
    for (char &ch : l)
    {
        if (newWord && isalpha(ch))
        {
            ch = toupper(ch);
            newWord = false;
        }
        else if (!isalpha(ch))
        {
            newWord = true;
        }

        cout << ch;
    }

    cout << endl;
}
int main()
{
    string line;
    char choice;
    getline(cin, line);
    cin >> choice;

    if (choice == 'L' || choice == 'U')
    {
        convertString(line, choice);
    }
    else if (choice == 'F')
    {
        convertFirstLetterToUpper(line, choice);
    }
    else
    {
        cout << "Invalid choice. Please enter U, L, or F." << endl;
    }
    return 0;
}