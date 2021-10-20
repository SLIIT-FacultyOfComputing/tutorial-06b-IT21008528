#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

// Assign studentId and name
void Student::assignDetails(int sid, char const sname[]) {
    studentId =  sid;
    strcpy(name, sname);
}

// Display StudentId and Name
void Student::display() {

    cout << "Stdent ID : " << studentId << endl;
    cout << "Stdent name : " << name << endl;
}
