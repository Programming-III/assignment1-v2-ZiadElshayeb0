#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

//#write Person class here

class Person{

    protected:
    string name;
    int id;

    public:
    Person(string name, int id);
    Person();
    ~Person();              
    void display();

};

#endif



