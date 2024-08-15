#ifndef __CUSTOM_TYPE_H__
#define __CUSTOM_TYPE_H__

#include <iostream>
using namespace std;

struct Point3D
{
    float x;
    float y;
    float z;

    Point3D(float x_, float y_, float z_) : x(x_), y(y_), z(z_) {}

    void print() const
    {
        std::cout << "Point3D(" << x << ", " << y << ", " << z << ")"
                  << std::endl;
    }
};

#endif // __CUSTOM_TYPE_H__