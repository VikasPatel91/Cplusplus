#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

const double PI = 3.14159;

template <typename T>
class Shape
{
protected:
    string name;
public:
    Shape(string name)
    {
        this->name = name;
    }

    virtual T area() = 0;

  
};


template <typename T>
class Circle : public Shape<T>
{
private:
    T radius; 
public:

    Circle(string name, T radius) : Shape<T>(name)
    {
        this->radius = radius;
    }

    
    T area()
    {
        return PI * pow(radius, 2);
    }
};

template <typename T>
class Square : public Shape<T>
{
private:
    T side; 
public:
    
    Square(string name, T side) : Shape<T>(name)
    {
        this->side = side;
    }

    T area()
    {
        return pow(side, 2);
    }
};


template <typename T>
class Triangle : public Shape<T>
{
private:
    T base;   
    T height; 
public:

    Triangle(string name, T base, T height) : Shape<T>(name)
    {
        this->base = base;
        this->height = height;
    }


    T area()
    {
        return 0.5 * base * height;
    }
};

int main()
{
    string name;                    
    double radius, side, base, height; 
    double totalArea = 0;        

    getline(cin, name);
    cin >> radius;

    Circle<double> circle(name, radius);

    totalArea += circle.area();

    cin.ignore();
    getline(cin, name);
    cin >> side;

    Square<double> square(name, side);


    totalArea += square.area();
    cin.ignore();
    getline(cin, name);
    cin >> base >> height;

    Triangle<double> triangle(name, base, height);


    totalArea += triangle.area();
    cout << "Total area of all shapes: " << fixed << setprecision(2) << totalArea << endl;

    return 0;
}