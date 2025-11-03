#pragma once
#include <string>

class Assignment
{
public:
    Assignment(const std::string &name, int max_score);
    std::string get_name() const;
    int get_max_score() const;

private:
    std::string name;
    int max_score;
};