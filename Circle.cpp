#include "Circle.h"
#include <iostream>
#include <cmath>

Circle::Circle()
{
    x = 0;
    y = 0;
    r = 1;
    std::cout << "Конструктор за замовчуванням викликаний." << std::endl;
}

Circle::Circle(double x, double y, double r)
{
    this->x = x;
    this->y = y;
    this->r = r;
    std::cout << "Конструктор з параметрами викликаний." << std::endl;
}

Circle::Circle(const Circle &c)
{
    this->x = c.x;
    this->y = c.y;
    this->r = c.r;
    std::cout << "Копіювальний конструктор викликаний." << std::endl;
}

Circle &Circle::operator=(const Circle &c)
{
    if (this != &c)
    {
        x = c.x;
        y = c.y;
        r = c.r;
        std::cout << "Оператор присвоєння викликаний.\n";
    }
    return *this;
}

Circle::~Circle()
{
    std::cout << "Деструктор викликаний для об'єкта, створеного за допомогою ";
    if (x == 0 && y == 0 && r == 1)
    {
        std::cout << "конструктора за замовчуванням." << std::endl;
    }
    else if (x != 0 || y != 0 || r != 1)
    {
        std::cout << "конструктора з параметрами." << std::endl;
    }
    else
    {
        std::cout << "копіювального конструктора." << std::endl;
    }
}

double Circle::area() const
{
    return M_PI * this->r * this->r;
}

void Circle::printInfo()
{
    std::cout << "Коло з центром (" << this->x << ", " << this->y << ") і радіусом " << this->r << std::endl;
}

void Circle::inputInfo()
{
    std::cout << "Введіть координати центру (x, y) та радіус (r): ";
    std::cin >> this->x >> this->y >> this->r;
}

bool Circle::compareArea(const Circle &c) const
{
    if (this->area() > c.area())
    {
        return 1;
    }
    else if (this->area() < c.area())
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

double Circle::arcLength(double kut)
{
    return (kut / 360.0) * 2 * M_PI * this->r;
}

Circle Circle::operator+(const Circle &c) const
{
    Circle result;
    result.r = sqrt((this->area() + c.area()) / M_PI);
    return result;
}

Circle Circle::operator-(const Circle &c) const
{
    Circle result;
    double areaDiff = this->area() - c.area();
    if (areaDiff < 0)
        areaDiff = 0;
    result.r = sqrt(areaDiff / M_PI);
    return result;
}

Circle Circle::operator*(const Circle &c) const
{
    Circle result;
    result.r = sqrt(std::min(this->area(), c.area()) / M_PI);
    return result;
}
