#include <iostream>
#include <vector>
#include <string>

#include "gradebook.hpp"
#include "student.hpp"
#include "assignment.hpp"
#include "grade.hpp"

Gradebook::Gradebook()
    : students()
    , assignments()
    , grades()
{
}

void Gradebook::add_student(const std::string &name, const std::string &student_id)
{
    students.emplace_back(name, student_id);
}

void Gradebook::add_assignment(const std::string &assignment_name, int max_score)
{
    assignments.emplace_back(assignment_name, max_score);
}

void Gradebook::enter_grade(const std::string &student_name, const std::string &assignment_name, int score)
{
    for (auto &student : students)
    {
        if (student.get_name() == student_name)
        {
            for (auto &assignment : assignments)
            {
                if (assignment.get_name() == assignment_name)
                {
                    grades.emplace_back(&student, &assignment, score);
                    return;
                }
            }
        }
    }
}

void Gradebook::print_report() const
{
    std::cout << "\nGrade Report:" << std::endl;

    for (const auto &student : students)
    {
        std::cout << student.get_last_name() << ","
                  << student.get_first_name() << ","
                  << student.get_student_id();

        for (const auto &assignment : assignments)
        {
            int score = 0;
            bool found = false;

            for (const auto &grade : grades)
            {
                if (grade.get_student() == &student && grade.get_assignment() == &assignment)
                {
                    score = grade.get_score();
                    found = true;
                    break;
                }
            }

            std::cout << "," << (found ? std::to_string(score) : "none");
        }

        std::cout << std::endl;
    }

    std::cout << std::endl;

}
