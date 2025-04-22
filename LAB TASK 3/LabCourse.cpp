#include <iostream>
#include "LabCourse.h"
#include "Course.h"
using namespace std;

LabCourse:: LabCourse(string c,int cr, double a, double q): Course(c, cr), Assignment(a), Quiz(q){}

double LabCourse::calculateGrade()
{
    return  Assignment* 1.5 + Quiz * 1.2;
}
void LabCourse::displayInfo()
{
    cout << "=====DETAILS======"<<endl;
    cout << "Course Code: " << courseCode << endl;
    cout << "Credit Hour: " << credits << endl;
    cout << "Assignments Marks: " << labAssignments << endl;
    cout << "Quiz marks: " << projectWork << endl;
    cout << "Grade: " << calculateGrade();
}
