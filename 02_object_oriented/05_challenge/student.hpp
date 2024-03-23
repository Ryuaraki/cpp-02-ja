#pragma once

#include <string>
#include <vector>


class Teacher;

class Student {
public:
    Student(const std::string& name);

    std::string getName() const;
    void printTeachers() const;
    void assignTeacher(Teacher* teacher);

private:
    std::string name;
    std::vector<Teacher*> teachers;
};