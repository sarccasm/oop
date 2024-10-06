#ifndef Circle_h
#define Circle_h

class Circle
{
private:
    double x, y, r;

public:
    Circle();
    Circle(double x, double y, double r);
    Circle(const Circle &c);
    Circle &operator=(const Circle &c);
    ~Circle();

    Circle operator+(const Circle &c) const;
    Circle operator-(const Circle &c) const;
    Circle operator*(const Circle &c) const;

    double area() const;
    void printInfo();
    void inputInfo();
    bool compareArea(const Circle &c) const;
    double arcLength(double kut);
};

#endif
