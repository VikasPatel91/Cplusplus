#include <iostream>
#include <iomanip>
//hello
using namespace std;
class Product
{
public:
    virtual float calculateTotalPrice() const = 0;
    virtual ~Product() {}
};

class Electronics : public Product
{
private:
    float price;
    float discount;

public:
    Electronics(float p, float d) : price(p), discount(d) {}

    float calculateTotalPrice() const override
    {
        return price - (price * discount / 100);
    }
};

class Apparel : public Product
{
private:
    float price;
    float tax;

public:
    Apparel(float p, float t) : price(p), tax(t) {}

    float calculateTotalPrice() const override
    {
        return price + (price * tax / 100);
    }
};

int main()
{
    float electronicsPrice, electronicsDiscount, apparelPrice, apparelTax;

    // Input for electronics
    cin >> electronicsPrice >> electronicsDiscount;

    // Input for apparel
    cin >> apparelPrice >> apparelTax;

    // Create Electronics object
    Product *electronicsProduct = new Electronics(electronicsPrice, electronicsDiscount);
    // Calculate and display total price for electronics
    cout << fixed << setprecision(2) << electronicsProduct->calculateTotalPrice() << endl;

    // Create Apparel object
    Product *apparelProduct = new Apparel(apparelPrice, apparelTax);
    // Calculate and display total price for apparel
    cout <<fixed<<setprecision(2)<< apparelProduct->calculateTotalPrice() << endl;

    // Clean up dynamically allocated memory
    delete electronicsProduct;
    delete apparelProduct;

    return 0;
}
