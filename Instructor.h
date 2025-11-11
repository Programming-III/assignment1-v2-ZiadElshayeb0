#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
#include <string>

using namespace std;

//#write Instructor class here

class Instructor : public Person{

    protected:
    string department;
    int experienceYears;

    public:
    Instructor(string name, int id, string department, int experienceYears);
    Instructor();
    ~Instructor();
    void display();

};

#endif
