#include <iostream>
#include <string>
using namespace std;

#include "Circle.h"
#include "Circle.h"

int main(int argc, char const *argv[])
{

    Circle pizza1, pizza2; // 객체 생성
    pizza1.radius = 100;
    pizza1.color = "yellow";
    cout << "area : " << pizza1.calcArea() << endl;

    pizza2.radius = 200;
    pizza2.color = "white";
    cout << "area : " << pizza2.calcArea() << endl;

    return 0;
}
