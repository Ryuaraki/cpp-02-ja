#pragma once

#include <string>
#include <vector>


class Student;

class Teacher {
public:
    Teacher(const std::string& name);

    std::string getName() const;
    void printStudents() const;
    void assignStudent(Student* student);

private:
    std::string name;
    std::vector<Student*> students;
};