#include "Point.hpp"

Point::Point(float x, float y)
{
    this->x = x;
    this->y = y;
}

Point::Point(const Point& other)
{
    *this = other;
}

Point& Point::operator=(const Point& other)
{
    if (this == &other)
        return *this;
    this->x = other.x;
    this->y = other.y;
    return *this;
}

Point::~Point()
{

}

float Point::getX()
{
    return this->x;
}

float Point::getY()
{
    return this->y;
}