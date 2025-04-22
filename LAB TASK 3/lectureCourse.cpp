#include "LectureCourse.h"
#include "Course.h"
using namespace std;
LectureCourse ::LectureCourse(string c, int cr, double m, double f) : Course(c, cr), Mark1(m1), Mark2(m2) {}
double LectureCourse ::calculateGrade()
{
    return Mark1 * 0.4 + Mark2 * 0.6;
}
void LectureCourse::displayInfo()
{
    cout << "=====DETAILS======\n";
    cout << "Course Code: " << CourseCode << endl;
    cout << "Credit Hour: " << Credits << endl;
    cout << "First test Marks: " << Mark1 << endl;
    cout << "Second test Marks: " << Mark2 << endl;
    cout << "Grade: " << calculateGrade();
}
