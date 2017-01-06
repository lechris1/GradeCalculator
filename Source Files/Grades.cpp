#include "../Header Files/Grades.h"

//default class object constructor
Grades::Grades()
{
	addGrade();
}

//add a new grade
void Grades::addGrade()
{
	double score;

	cout << "\nInput score: ('-1' to stop) "; //sentinel-driven input clause/priming-read for loop below
	cin >> score;

	while (score != -1)
	{
		grades_.push_back(score);
		cout << "Input score: ('-1' to stop) ";
		cin >> score;
	}

	//maybe add way to insert instead of just appending
}

//change a grade using index
void Grades::changeGrade()
{
	double new_score;

	cout << *this << endl;
	cout << "\nWhich score do you want to change? ";
	cin >> score_index;

	cout << "\nWhat do you want the new score to be? ";
	cin >> new_score;

	grades_.at(score_index-1) = new_score;

	cout << "\nScore successfully modified." << endl;
}

//delete a grade using index
void Grades::deleteGrade()
{
	cout << *this << endl;
	cout << "\nWhich score do you want to delete? ";
	cin >> score_index;

	grades_.erase((grades_.begin()) + score_index-1);

	cout << "\nScore successfully deleted." << endl;
}

/*print grades as:
     1     2     3     4     5 ... (index)
    89    94    84    79   100 ... (score)
*/

ostream& operator<<(ostream& out, Grades g)
{
	out << "\nIndex:";
	for (unsigned i = 1; i <= g.grades_.size(); i++)
	{
		out << setw(6);
		out << i;
	}
	out << endl << "Score:";
	for (double score : g.grades_)
	{
		out << setw(6);
		out << score;
	}
	return out;
}
