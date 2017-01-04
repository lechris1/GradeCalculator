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

	//methods
	void addGrade();
	void changeGrade();
	void deleteGrade();
};

#endif
