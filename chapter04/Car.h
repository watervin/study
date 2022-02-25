#pragma once
#include <string>
using namespace std;

class Car
{
public:
    int speed;    // 속도
    int gear;     // 기어
    string color; // 색상
    void speedUp()
    {
        speed += 10;
    }
    void speedDown()
    {
        speed -= 10;
    }
};