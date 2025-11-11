#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"

using namespace std;

// ==================== Person Class Implementation =========================

Person::Person(string name, int id){
    this -> name = name;
    this -> id = id;
}

Person::Person(){
    this -> name = "";
    this -> id = 0;
}

void Person::display(){
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
}
// ==================== Student Class Implementation ====================

Student::Student(string name, int id, int yearLevel, string major)  : Person(name,id){
    this -> name = name;
    this -> id = id;
    this -> yearLevel = yearLevel;
    this -> major = major;
}

Student::Student(){
    this -> name = "";
    this -> id = 0;
    this -> yearLevel = 0;
    this -> major = "";
}

void Student::display(){
    cout << "Name: " << name << endl;
    cout << "Year: " << yearLevel << endl;
    cout << "Major" << major << endl;
}

// ==================== Instructor Class Implementation ====================

Instructor::Instructor(string name, int id, string department, int experienceYears) : Person(name,id){
    this -> name = name;
    this -> id = id;
    this -> department = department;
    this -> experienceYears = experienceYears;
}

Instructor::Instructor(){
    this -> name = "";
    this -> id = 0;
    this -> department = "";
    this -> experienceYears = 0;
}

void Instructor::display(){
    cout << "Instructor Info: " << endl;
    cout << "Name: " << name << endl;
    cout << "Department: " << department << endl;
    cout << "Experience: " << experienceYears << endl;
}

// ==================== Course Class Implementation ====================

Course::Course(string courseCode, string courseName, int maxStudents, Student* students, int currentStudents){
    this -> courseCode = courseCode;
    this -> courseName = courseName;
    this -> maxStudents = maxStudents;
    this -> students = students;
    this -> currentStudents = currentStudents;
}

Course::Course(){
    this -> courseCode = "";
    this -> courseName = "";
    this -> maxStudents = 0;
    this -> students = nullptr;
    this -> currentStudents = 0;
}

int Course::addStudent(const Student& s){
    if(currentStudents < maxStudents){
        students[currentStudents] = s;
        currentStudents++;
    }
    cout << "Cannot add more students" << endl;
}

void Course::displayCourseInfo(){
    cout << "Course: " << courseCode << "-" << courseName << endl;
    cout << "Max Students: " << maxStudents << endl;
}


// ==================== Main Function ====================
int main() {

    Student S1("Omar Nabil", 2202, 2, "Informatics");
    Course C1("CS101", "Introduction to Computer Science", 3, nullptr, 0);
    C1.addStudent(S1);
    Instructor I1("Dr. Lina Khaled", 16002080, "Computer Science", 5);

    C1.displayCourseInfo();
    I1.display();
    S1.display();

    return 0;
}

