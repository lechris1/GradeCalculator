/*
Contains type of assignment such as a midterm exam, final exam, or homework.
Within each type, a vector of grades are recorded.
*/

#ifndef CATEGORY_H
#define CATEGORY_H

#include<string>
using std::string;
#include<iomanip>
using std::setfill;
#include "Grades.h"

class Category
{
private:
	string category_;
	double weight_;
	Grades grades_;

public:
	Category();
	friend ostream& operator<<(ostream& out, Category c);
};



#endif
