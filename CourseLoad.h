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
	vector<Course> courses;

public:
	CourseLoad();
	void addCourse();
	void deleteCourse();


};

#endif
