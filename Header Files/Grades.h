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
	int score_index_; //to identify score position in the underlying vector

public:
	//two constructor: one for text file and one for cmd input
	Grades();

	//methods
	void addGrade();
	void changeGrade();
	void deleteGrade();
	friend ostream& operator<<(ostream& out, Grades g);
};

#endif
