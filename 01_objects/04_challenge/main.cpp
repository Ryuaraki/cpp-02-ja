#include <iostream>
#include "person.hpp"
#include "team.hpp"
#include "project.hpp"


int main () {
    Person taro = Person("taro");
    Person jiro = Person("jiro");
    Person hanako = Person("hanako");

    Project project = Project();

    project.add_team_member(taro);
    project.add_team_member(jiro);
    project.add_team_member(hanako);

    project.print_team_members();
    

    return 0;
}