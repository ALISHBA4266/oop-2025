#pragma once
#include <iostream>
#include "Course.h"
using namespace std;
class LectureCourse:public Course{
    
    double Mark1,Mark2;
    public:
     LectureCourse(string c,int cr,double m1,double m2);
     double calculateGrade();
     void displayInfo();
    
};

   
