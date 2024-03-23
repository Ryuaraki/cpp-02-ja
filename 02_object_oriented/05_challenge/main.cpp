#include <iostream>
#include "student.hpp"
#include "teacher.hpp"
#include "school.hpp"


int main() {
    School mySchool;

    Teacher teacher1 = Teacher("Mr. Smith");
    Teacher teacher2 = Teacher("Ms. Johnson");

    Student student1 = Student("Alice");
    Student student2 = Student("Bob");
    Student student3 = Student("Cathy");

    mySchool.hireTeacher(&teacher1);
    mySchool.hireTeacher(&teacher2);

    mySchool.enrollStudent(&student1);
    mySchool.enrollStudent(&student2);
    mySchool.enrollStudent(&student3);

    mySchool.assignStudent(&student1, &teacher1);
    mySchool.assignStudent(&student2, &teacher1);
    mySchool.assignStudent(&student3, &teacher2);
    
    student1.printTeachers(); // Mr.Smith
    std::cout << "---" << std::endl;
    teacher1.printStudents(); // Alice, Bob
    std::cout << "---" << std::endl;
    student2.printTeachers(); // Mr.Smith
    
    /*
    // Print teachers and their students
    for (auto* teacher : mySchool.getTeachers()) {
        std::cout << teacher->getName() << " teaches: ";
        for (auto* student : teacher->getStudents()) {
            std::cout << student->getName() << ", ";
        }
        std::cout << std::endl;
    }

    // Print students and their teachers
    for (auto* student : mySchool.getStudents()) {
        std::cout << student->getName() << " is taught by: ";
        for (auto* teacher : student->getTeachers()) {
            std::cout << teacher->getName() << ", ";
        }
        std::cout << std::endl;
    }*/
    return 0;
}