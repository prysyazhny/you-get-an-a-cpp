#include "student.hpp"
#include <string>

Student::Student(const std::string &name, const std::string &student_id)
{
    this->name = name;
    this->student_id = student_id;
}

std::string Student::get_name() const
{
    return name;
}

std::string Student::get_student_id() const
{
    return student_id;
}

std::string Student::get_first_name() const
{
    size_t space_pos = name.find(' ');
    if (space_pos != std::string::npos)
    {
        return name.substr(0, space_pos);
    }
    return name; 
}

std::string Student::get_last_name() const
{
    size_t space_pos = name.find(' ');
    if (space_pos != std::string::npos)
    {
        return name.substr(space_pos + 1);
    }
    return ""; 
}