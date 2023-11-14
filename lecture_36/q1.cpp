#include <iostream>
#include <string>
using namespace std;
class DecimalToBinaryConverter
{
public:
    string convertToBinary(int decimal)
    {
        return convert(decimal);
    }

    string convertToBinary(long decimal)
    {
        return convert(decimal);
    }

private:
    template <typename T>
    string convert(T decimal)
    {
        string binary;
        while (decimal > 0)
        {
            binary = std::to_string(decimal % 2) + binary;
            decimal /= 2;
        }
        return binary.empty() ? "0" : binary;
    }
};

int main()
{
    int decimal;
    cin >> decimal;
    DecimalToBinaryConverter converter;

    cout << converter.convertToBinary(decimal) << endl;

    return 0;
}
