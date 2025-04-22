#pragma once
#include "Course.h"
usng namespace std;
class LabCourse:public Course{
    double Assignment;
    double Quiz;
    public:
    LabCourse(string c, int cr, double a, double q);
     double calculateGrade();
     void displayInfo();   
};
