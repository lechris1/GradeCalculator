#include "../Header Files/Category.h"

//default constructor
Category::Category(string category)
{
	category_ = category;
	cout << "What percentage does it carry for the course? ";
	cin >> weight_;
}

//output " category (weight) " then grades
ostream& operator<<(ostream& out, Category c)
{
	out << c.category_ << " (" << c.weight_ << ")" << endl;
	out << c.grades_;
	return out;
}


