#pragma once
#include <iostream>
#include <string>
using namespace std;

int hour = 14;

void print()
{
    cout << "global hour : " << hour << endl;
}

class Time
{
protected:
    int hour;
    int minute;

public:
    //생성자
    Time(int hour = 0, int minute = 0) : hour(hour), minute(minute)
    {
        //변수의 해석 순서 :  지역변수 -> 멤버변수 -> 전역변수
        // this 현재 인스턴스에 대한 포인터

        print();   //멤버함수 print()
        ::print(); //전역 함수 print()
    }
    ~Time() //소멸자.
    {
        cout << "destrutor call!" << endl;
    }
    void print()
    {
        cout << hour << ":" << minute << endl;
    }
};