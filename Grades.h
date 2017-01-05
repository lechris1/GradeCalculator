/*
Contains grades.
*/

#ifndef GRADE_H
#define GRADE_H

#include<vector>
using std::vector;

class Grades
{
private:
	vector<int> grades;

public:
    //two constructor: one for text file and one for cmd input
	Grades();

	//methods
	void addGrade();
	void changeGrade();
	void deleteGrade();
	friend ostream& operator<<(ostream& out, Grades g);
};

ostream& operator<<(ostream& out, Grades g);

#endif
