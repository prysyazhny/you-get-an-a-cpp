#pragma once

class Student;
class Assignment;

class Grade
{
public:
    Grade(const Student *student, const Assignment *assignment, int score);
    const Student *get_student() const;
    const Assignment *get_assignment() const;
    int get_score() const;

private:
    const Student *student;
    const Assignment *assignment;
    int score;
};