#include "../Header Files/Category.h"

Category::Category()
{
	cout << "\nName of Category: ";
	cin >> category_;
	cout << "What percentage does it carry for the course? ";
	cin >> weight_;
}

ostream& operator<<(ostream& out, Category c)
{
	cout << c.category_ << endl;
	cout << 
}


