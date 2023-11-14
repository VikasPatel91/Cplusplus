#include <iostream>
#include <vector>

class Device
{
public:
    virtual int calculateEnergyConsumption() = 0;
    virtual void displayDeviceType() const = 0;
    virtual ~Device() {}
};

class Refrigerator : public Device
{
private:
    int powerRating;
    int usageHours;
    int energyConsumption;

public:
    Refrigerator(int p, int h) : powerRating(p), usageHours(h), energyConsumption(0) {}

    int calculateEnergyConsumption() override
    {
        return energyConsumption = powerRating * usageHours;
    }

    void displayDeviceType() const override
    {
        std::cout << "Device Type: Refrigerator" << std::endl;
    }

    int getEnergyConsumption() const
    {
        return energyConsumption;
    }
};

class AirConditioner : public Device
{
private:
    int powerRating;
    int usageHours;
    int energyConsumption;

public:
    AirConditioner(int p, int h) : powerRating(p), usageHours(h), energyConsumption(0) {}

    int calculateEnergyConsumption() override
    {
        return energyConsumption = powerRating * usageHours;
    }

    void displayDeviceType() const override
    {
        std::cout << "Device Type: Air Conditioner" << std::endl;
    }

    int getEnergyConsumption() const
    {
        return energyConsumption;
    }
};

int main()
{
    int n;
    std::cin >> n;

    std::vector<Device *> devices;

    for (int i = 0; i < n; ++i)
    {
        int deviceType, power, hours;
        std::cin >> deviceType >> power >> hours;

        Device *device;

        if (deviceType == 1)
        {
            device = new Refrigerator(power, hours);
        }
        else if (deviceType == 2)
        {
            device = new AirConditioner(power, hours);
        }
        else
        {
            std::cerr << "Invalid device type." << std::endl;
            return 1;
        }

        device->calculateEnergyConsumption();
        device->displayDeviceType();
        //  std::cout << "Energy Consumption: " << device->calculateEnergyConsumption() << " watt-hours" << std::endl;

        devices.push_back(device);
    }

    int totalEnergyConsumption = 0;
    for (const auto &device : devices)
    {
        totalEnergyConsumption += device->calculateEnergyConsumption();
    }

    std::cout << "Total Energy Consumption: " << totalEnergyConsumption << " watt-hours" << std::endl;

    // Clean up dynamically allocated memory
    for (const auto &device : devices)
    {
        delete device;
    }

    return 0;
}
