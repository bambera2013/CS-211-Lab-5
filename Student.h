#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include<iostream>
#include<string>

using namespace std;

class Student{
private: //private variables
    string name;
    const long studentID = 10000;
    string major; //CS, MATH, PHYS…
    string classification; // graduate or undergraduate
    int units; // total units enrolled float tuition;
    float tuition;
    static int totalNumofStudents;
    static int nextStudentID;

public: //public variables
    Student();
    Student(string theName, string theMajor, string theClassification, int theUnits);
    ~Student();
    void print();
    void getData();
    void setTuition(double val);
    //friend void setTuition(Student &student);
    friend void setTuition(Student &student); //It is NOT a member class function (it is a normal function)
    // Now, even though setTuition is not a member of this class, it can use private members of this class
    // Because Student declares that setTuition is their friend and can access the private parts
    double getTuition();
    //function to calculate tuition using units
    int getUnits();
    string getClassification();
};
#endif // STUDENT_H_INCLUDED
