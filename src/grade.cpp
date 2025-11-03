
#include "grade.hpp"
#include "student.hpp"
#include "assignment.hpp"

Grade::Grade(const Student *student, const Assignment *assignment, int score)
    : student(student), assignment(assignment), score(score)
{
}

const Student *Grade::get_student() const
{
    return student;
}

const Assignment *Grade::get_assignment() const
{
    return assignment;
}

int Grade::get_score() const
{
    return score;
}
