/*
Contains the course load for a semester.
*/

#ifndef COURSELOAD_H
#define COURSELOAD_H

#include<vector>
using std::vector;

#include "Course.h"

class CourseLoad
{
private:
	int year_;
	string semester_;
	vector<Course> courses_;

public:
	CourseLoad();
	void addCourse();
	void deleteCourse();
	//choosing to print courseload instead of allowing operator<< to do it
	void printCourseLoad();
};


#endif
