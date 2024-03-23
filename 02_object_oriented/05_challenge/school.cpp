#include <iostream>
#include <cassert>

#include "school.hpp"
#include "teacher.hpp"
#include "student.hpp"


School::School() {};

void School::enrollStudent(Student* student) {
    students.push_back(student);
}


void School::hireTeacher(Teacher* teacher) {
    teachers.push_back(teacher);
}

void School::assignStudent(Student* student, Teacher* teacher) {
    assert(hasStudent(student) && hasTeacher(teacher));
    teacher->assignStudent(student);
    student->assignTeacher(teacher);
}

bool School::hasTeacher(Teacher* target) {
    for(auto teacher  : teachers) {
        if(teacher == target) {
            return true;
        }
    }

    return false;
}

bool School::hasStudent(Student* target) {
    for(auto student  : students) {
        if(student == target) {
            return true;
        }
    }

    return false;
}