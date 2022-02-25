#include <iostream>
using namespace std;
int main()
{
    const int STUDENTS = 10;
    int scores[STUDENTS];
    int sum = 0;
    int i, average;
    for (i = 0; i < STUDENTS; i++)
    {
        cout << "enter the student number: ";
        cin >> scores[i];
    }
    for (i = 0; i < STUDENTS; i++)
    {
        sum += scores[i];
    }
    average = sum / STUDENTS;
    cout << "average = " << average << endl;
    return 0;
}
