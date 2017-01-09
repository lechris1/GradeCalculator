CourseLoad = ./"Source Files"/CourseLoad.cpp
Course = ./"Source Files"/Course.cpp
Category = ./"Source Files"/Category.cpp
Grades = ./"Source Files"/Grades.cpp

all:
	g++ -std=c++11 main.cpp $(CourseLoad) $(Course) $(Category) $(Grades) -o main.exe
