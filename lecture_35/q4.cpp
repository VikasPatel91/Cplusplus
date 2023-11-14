#include <iostream>

#include <iomanip>

// Abstract class representing an Investment

class Investment
{

public:
    virtual double calculateReturns() const = 0;

    void displayInvestmentDetails() const
    {

        displaySpecificInvestmentDetails();

        std::cout << std::fixed << std::setprecision(2);

        std::cout << "Returns: " << calculateReturns() << "%" << std::endl;
    }

private:
    virtual void displaySpecificInvestmentDetails() const = 0;
};

class Stock : public Investment
{

private:
    double initialInvestment;

    double finalValue;

public:
    // Constructor

    Stock(double initialInvestment, double finalValue) : initialInvestment(initialInvestment), finalValue(finalValue) {}

    double calculateReturns() const override
    {

        return ((finalValue - initialInvestment) / initialInvestment) * 100.0;
    }

private:
    void displaySpecificInvestmentDetails() const override
    {

        std::cout << "Type: Stock" << std::endl;

        std::cout << std::fixed << std::setprecision(2);

        std::cout << "Initial Investment: " << initialInvestment << std::endl;

        std::cout << "Final Value: " << finalValue << std::endl;
    }
};

class Bond : public Investment
{

private:
    double initialInvestment;

    double finalValue;

public:
    // Constructor

    Bond(double initialInvestment, double finalValue) : initialInvestment(initialInvestment), finalValue(finalValue) {}

    // Implementation of calculateReturns for Bond

    double calculateReturns() const override
    {

        return ((finalValue - initialInvestment) / initialInvestment) * 100.0;
    }

private:
    // Implementation of displaySpecificInvestmentDetails for Bond

    void displaySpecificInvestmentDetails() const override
    {

        std::cout << "Type: Bond" << std::endl;

        std::cout << "Initial Investment: " << initialInvestment << std::endl;

        std::cout << "Final Value: " << finalValue << std::endl;
    }
};

int main()
{

    double initialInvestment, finalValue;

    std::cin >> initialInvestment;

    std::cin >> finalValue;

    // Create a Stock object

    Stock stock(initialInvestment, finalValue);

    stock.displayInvestmentDetails();

    std::cout << std::endl;

    std::cin >> initialInvestment;

    std::cin >> finalValue;

    // Create a Bond object

    Bond bond(initialInvestment, finalValue);

    // Display the investment details and returns

    bond.displayInvestmentDetails();

    return 0;
}