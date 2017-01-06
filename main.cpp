#include<iostream>
using std::cout; using std::cin; using std::endl;

//#include "CourseLoad.h"
//#include "Course.h"
//#include "Category.h"
#include "Grades.h"

int main()
{
	//do whatever you want
	Grades gr;
	cout << gr << endl;
	gr.changeGrade();
	cout << gr << endl;
	gr.deleteGrade();
	cout << gr << endl;

	return 0;
}
