/*
Contains grade information about a course. This class handles the grading scale and allocations.
*/

#ifndef COURSE_H
#define COURSE_H

#include "Category.h"

class Course
{
private:
	//use another vector to store and manage the scale allocations?
	string name_;
	string code_; //easier to look up than name_
	vector<Category> categories_;

public:
	Course();
	void addCategory();
};

#endif
