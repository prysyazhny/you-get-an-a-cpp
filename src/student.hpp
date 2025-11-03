
#pragma once

#include <string>

class Student
{
public:
    Student(const std::string &name, const std::string &student_id);
    std::string get_name() const;
    std::string get_student_id() const;
    std::string get_first_name() const;
    std::string get_last_name() const;
private:
    std::string name;
    std::string student_id;
};