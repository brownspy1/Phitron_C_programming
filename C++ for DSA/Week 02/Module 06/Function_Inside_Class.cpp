// Created by M.Mahadi on 2024-06-09 18:59:17
#include <iostream>
using namespace std;
class user
{
public:
    string name;
    int roll;
    int marks;
    char season;
    user(string name, int roll, int marks, char season)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
        this->season = season;
    }
    void detail()
    {
        cout << "Name: " << name << endl
             << "Roll: " << roll << endl
             << "Total Marks: " << marks << endl
             << "Season: " << season << endl;
    }
};
int main()
{
    user mahadi("Mahadi", 743678, 80, 'B');
    mahadi.detail();
    return 0;
}