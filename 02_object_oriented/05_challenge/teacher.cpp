#include <iostream>
#include "teacher.hpp"
#include "student.hpp"

Teacher::Teacher(const std::string& name) : name(name) {};

std::string Teacher::getName() const {
    return name;
}

void Teacher::printStudents() const {
    for(auto* student : students) {
        std::cout << student->getName() << std::endl;
    }
}

void Teacher::assignStudent(Student* student) {
    students.push_back(student);
}