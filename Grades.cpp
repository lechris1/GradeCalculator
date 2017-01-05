#include "Grades.h"
#include<iostream>
using std::cout; using std::cin; using std::endl; using std::ostream;
#include<iomanip>
using std::setw;
#include<vector>

Grades::Grades()
{
	addGrade();
}

//add a new grade
void Grades::addGrade()
{
	int score;
	cout << "Input score: ('-1' to stop)";
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
	cout << "Which score do you want to change?";

}

//delete a grade using index
void Grades::deleteGrade()
{
	cout << "Which score do you want to delete?";
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
