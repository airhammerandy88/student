#include "roster.h"

Roster::nextIndex = 0;



Roster::Roster()
{
	clasRosterArray = new Student[5];
}

Roster::~Roster()
{
	delete[] classRosterArray;
}

void Roster::parse(string studentArray)
{
	int elements = 0;

	size_t rhs = classRosterArray.find(",");//data needs to be changed to object
	string firstName = data.substr(0, rhs);

	size_t lhs = rhs + 1;
	rhs = classRosterArray.find(",", lhs);
	string lastName = classRosterArray.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = classRosterArray.find(",", lhs);
	string emailAddress = classRosterArray.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = classRosterArray.find(",", lhs);
	int age = stoi(classRosterArray.substr(lhs, rhs - lhs));


	// change all to relivent data

	add(firstName, lastName, emailAddress, age);
}

void Roster::add(string studentId, string lastName, string emailAddress, int age, int daysInCourse1, int daysIncourse2, int daysInCourse3, DegreeProgram degreeProgram)
{
	Student a(studentId, lastName, emailAddress, age, daysInCourse1, daysIncourse2, daysInCourse3, degreeProgram);
	classRosterArray[nextIndex++] = a;
}

void Roster::remove(string studentId)
{

}

void Roster::printAll()
{
	for (int i = 0; i < 5 ++i) {
		classRosterArray[i].print();//change to relivent data
	}
}

void Roster::printAverageDaysInCourse(string studentId)
{
}

void Roster::printInvaildEmails()
{
}

void Roster::printBydegreeProgram(DegreeProgram degreProgram)
{
}
