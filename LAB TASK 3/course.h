#pragma once
#include <iostream>
#include<string.h>
using namespace std;

class Course{
    string CourseCode;
    int Credits;
    public:
    Course(string c,int cr):CourseCode(c),Credits(cr){}
    virtual double calculateGrade()=0;
    virtual void displayInfo()=0;
};
