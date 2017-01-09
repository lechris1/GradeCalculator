#include "../Header Files/Course.h"

//default constructor
Course::Course()
{
	cout << "Class code, ex: CSE231 : ";
	cin >> code_;

	addCategory();
}

//add another category
void Course::addCategory()
{
	string title; //name of category
	do
	{
		cout << "Name of Category: (ex: exams) ";
		cin >> title;
		categories_.push_back(Category(title));
	} while (title != "\n");
}
