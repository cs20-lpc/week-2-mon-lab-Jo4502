#include "Student.hpp"


Student::Student()
:   name(new string("")),
    age(new int(0))
{
    cout << "Student Createde \n";
}

Student::~Student() {
    cout << "Student destroyeed\n";
    delete name;
    delete age;
}

void Student::setName(string s) {
    *name = s;
}

void Student::setAge(int i) {
    *age = i;
}

string Student::getName() const {
    return *name;
}

int Student::getAge() const {
    return *age;
}