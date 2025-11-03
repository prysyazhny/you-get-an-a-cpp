#include <string>

#include "assignment.hpp"

Assignment::Assignment(const std::string &name, int max_score)
{
    this->name = name;
    this->max_score = max_score;
}

std::string Assignment::get_name() const
{
    return name;
}

int Assignment::get_max_score() const
{
    return max_score;
}