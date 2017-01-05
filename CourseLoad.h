/*
Contains the course load for a semester.
*/

#ifndef COURSELOAD_H
#define COURSELOAD_H

#include "Course.h"

#include<vector>
using std::vector;

class CourseLoad
{
private:
	vector<Course> courses;

public:
	CourseLoad();
	void addCourse();
	void deleteCourse();


};

#endif
