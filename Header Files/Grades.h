/*
Contains grades.
*/

#ifndef GRADE_H
#define GRADE_H

#include<iostream>
using std::cout; using std::cin; using std::endl; using std::ostream;
#include<iomanip>
using std::setw; using std::setprecision;
#include<vector>
using std::vector;

class Grades
{
private:
	vector<double> grades_;
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

//ostream& operator<<(ostream& out, Grades g);

//We don't have to define the following functions here right?
//I only defined the operator << separately since it was granted friendship
/*
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
*/

#endif
