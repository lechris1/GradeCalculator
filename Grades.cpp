#include "Grades.h"
#include<iostream>
using std::cout; using std::cin; using std::endl; using std::ostream;
#include<iomanip>
using std::setw; using std::setprecision;
#include<vector>

Grades::Grades() //default class object constructor
{
	addGrade();
}

//add a new grade
void Grades::addGrade()
{
	int score; //see header file; should we go with double or float instead? We want the precision of the potential decimal points right?
	
	cout << "Input score: ('-1' to stop)"; //sentinel-driven input clause/priming-read for loop below
	cin >> score;

	while (score != -1)
	{
		grades.push_back(score);
		cout << "Input score: ('-1' to stop)";
		cin >> score;
	}
}

//change a grade using index
void Grades::changeGrade()
{
	double new_score;
	
	cout << "\nWhich score do you want to change?"; //do we want lookup by location or vector position?
	cin >> score_index;

	cout<<"\nWhat do you want the new score to be?":
	cin >> new_score;

	grades.at(score_index) = new_score;

	cout << "\nScore successfully modified.";
}

//delete a grade using index
void Grades::deleteGrade()
{
	cout << "\nWhich score do you want to delete?";
	cin >> score_index;

	grades.erase((grades.begin) + score_index);

	cout << "\nScore successfully deleted.";
}

/*print grades as:
   1   2   3   4   5 ... (index)
  89  94  84  79 100 ... (score)
*/
ostream& operator<<(ostream& out, Grades g)
{
	out << setw(4);
	for (unsigned i = 1; i <= g.grades.size(); i++)
	{
		out << i;
	}
	for (int score : g.grades)
	{
		out << score;
	}
	return out;
}
