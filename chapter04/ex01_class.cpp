#include <iostream>
#include <string>
using namespace std;

#include "Circle.cpp"

int main(int argc, char const *argv[])
{
    Circle obj; // 객체 생성
    obj.radius = 100;
    obj.color = "blue";
    cout << "area" << obj.calcArea() << endl;
    return 0;
}
