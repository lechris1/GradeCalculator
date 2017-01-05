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
	vector<int> grades;  //are you sure you want integer grades? I would have thought double or float would be more representative here...
	int score_index; //to identify score position in the underlying vector

public:
    //two constructor: one for text file and one for cmd input
	Grades();

	//methods
	void addGrade();
	void changeGrade();
	void deleteGrade();
	friend ostream& operator<<(ostream& out, Grades g);
};

ostream& operator<<(ostream& out, Grades g)
{
	return out;
}

void addGrade()
{
	return;
}

void changeGrade()
{
	return;
}

void deleteGrade()
{
	return;
}

#endif
