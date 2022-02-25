#pragma once

#include <string>
using namespace std;

// Circle 클래스의 원형(prototype,signature)

class Circle
{
public:
    int radius;   // 반지름
    string color; // 색상
    double calcArea()
    {
        return 3.14 * radius * radius;
    }
};
