#pragma once

#include <vector>

class Student;
class Teacher;


class School {
public:
    School();
    void enrollStudent(Student* student);
    void hireTeacher(Teacher* teacher);
    void assignStudent(Student* student, Teacher* teacher);

private:
    bool hasTeacher(Teacher* teacher);
    bool hasStudent(Student* student);

    std::vector<Teacher*> teachers;
    std::vector<Student*> students;
};