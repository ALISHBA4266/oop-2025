#include<iostream>
#include <string>
#include "LectureCourse.h"
#include "LabCourse.h"
using namespace std;
//i have named it as course.cpp but it is the main file
int main(){
    Course* Maths=new LabCourse("SQR-4R",35,25.7,90);
    Course* English=new LabCourse("PQ2211",15,25.5,100);
    cout<<"-------------RESULTS--------------"<<endl;
    English->calculateGrade();
    English->displayInfo();
    cout<<"=========RESULTS=========="<<endl;
    Oop->calculateGrade();
    Oop->displayInfo();

}
