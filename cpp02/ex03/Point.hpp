#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

class Point
{
private:
    float x;
    float y;

public:
    Point(float x, float y);
    Point(const Point& other);
    Point& operator=(const Point& other);
    ~Point();

public:
    float getX();
    float getY();
};

#endif