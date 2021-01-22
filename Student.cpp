//Student.cpp
#include"Student.h"
#include <iostream>

//declare variables
int Student::totalNumofStudents=0;
int Student::nextStudentID=10000;


Student::Student(): studentID(nextStudentID){
    ++nextStudentID;
    name="Unknown";
    major="CS";
    classification="undergraduate";
    units=12;
    tuition=0;
    ++totalNumofStudents;
}

//sets the attributes based on what is passed to the function.
Student::Student(string theName, string theMajor, string theClassification, int theUnits):studentID(nextStudentID){
    ++nextStudentID;
    name=theName;
    major=theMajor;
    classification=theClassification;
    units=theUnits;
    tuition=0;
    ++totalNumofStudents;
}

//destructor
Student::~Student() {
    --totalNumofStudents;
}

//prints all attribute values
void Student::print(){
    cout << "Name: " << name << endl;
    cout << "StudentID: " << studentID << endl;
    cout << "Major: " << major << endl;
    cout << "Classification: " << classification << endl;
    cout << "Units: " << units << endl;
    cout << "Tuition: " << tuition << endl;
    cout << "Number of student: " << totalNumofStudents << endl;
    cout << "Next student ID: " << nextStudentID << endl;
    cout << endl;
}
//asks user to input data
void Student::getData(){
    cout<<"Enter Name: ";
    getline(cin,name);
    cout<<"Major: ";
    cin>>major;
    cout<<"Enter Classification: ";
    cin>>classification;
    cout<<"Units: ";
    cin>>units;
}

//friend void setTuition(student&);
//set and get function for tuition ,
 void Student::setTuition(double val){
    tuition=val;
}

double Student::getTuition(){
    return tuition;
}

//function to calculate tuition using units
int Student::getUnits(){
    return units;
}

string Student::getClassification(){
    return classification;
}

void setTuition(Student& student)
{
    if (student.classification == "undergraduate")
    {
        student.tuition = 700.0*student.units;
    }
    else
    {
        student.tuition = 1000.0*student.units;
    }
}

