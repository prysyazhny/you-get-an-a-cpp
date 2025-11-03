#pragma once

#include <string>
#include <vector>

#include "student.hpp"
#include "assignment.hpp"
#include "grade.hpp"

class Gradebook
{
public:
    Gradebook();
    void add_student(const std::string &name, const std::string &student_id);
    void add_assignment(const std::string &assignment_name, int max_score);
    void enter_grade(const std::string &student_name, const std::string &assignment_name, int score);
    void print_report() const;

private:
    std::vector<Student> students;
    std::vector<Assignment> assignments;
    std::vector<Grade> grades;
};