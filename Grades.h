/*
Contains grades.
*/

#ifndef GRADE_H
#define GRADE_H

#include<string>
#include<vector>
using std::vector;

class Grade
{
private:
    vector<int> grades;

public:
    //constructor
    void addGrade();
    void changeGrade();

};

#endif
