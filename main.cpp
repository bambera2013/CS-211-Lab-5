//Stephania Rey
//Lab 5
//main.cpp
#include <iostream>
#include"Student.h"

int main(){
    Student student1;
    //print student1 information
    cout << "---- Student1 Information ----" << endl;
    student1.print();

    Student student2("unknown","PHYS", "graduate",0);
    //set the student2 using getData
    student2.getData();
    //print information of student2
    cout << endl;
    cout << "---- Student2 Information ----" << endl;
    student2.print();

    setTuition(student2);
    cout << " ----Student2 with tuition ---" << endl;
    student2.print();
}
//function that takes Student object and sets tuition of student
