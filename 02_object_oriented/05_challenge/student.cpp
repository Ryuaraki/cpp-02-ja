#include <iostream>
#include "student.hpp"
#include "teacher.hpp"

Student::Student(const std::string& name) : name(name) {};

std::string Student::getName() const {
    return name;
}

void Student::printTeachers() const {
    for(auto* teacher : teachers) {
        std::cout << teacher->getName() << std::endl;
    }
}

void Student::assignTeacher(Teacher* teacher) {
    teachers.push_back(teacher);
}