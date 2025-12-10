#include "roster.h"

Student* classRosterArray[5];
int nextIndex = 0;



Roster::Roster()
{
	classRosterArray[5] = new Student[5];
}

Roster::~Roster()
{
	delete[] classRosterArray[5];
}

void Roster::parse(string studentData)//pulls from main studentdata array
{

	size_t rhs = studentData.find(",");
	string firstName = studentData.substr(0, rhs);

	size_t lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	string lastName = studentData.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	string emailAddress = studentData.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	int age = stoi(studentData.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	int numDays1 = stoi(studentData.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	int numDays2 = stoi(studentData.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	int numDays3 = stoi(studentData.substr(lhs, rhs - lhs));

	/*lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	enum degree = (studentData.substr(lhs, rhs - lhs));*/ //need to find solution for degree 

	


	

	add(firstName, lastName, emailAddress, age, numDays1, numDays2, numDays3);
}

void Roster::add(string studentId, string lastName, string emailAddress, int age, int daysInCourse1, int daysIncourse2, int daysInCourse3) //add degree
{//test to verify parse data
	cout << studentId << " " << lastName << endl;
	cout << emailAddress << " " << age << endl;
	cout << daysInCourse1 << " " << daysIncourse2 << endl;
	cout << daysInCourse3 << " " << endl; //add degree
	
}

void Roster::remove(string studentId)
{

}

void Roster::printAll()
{
	/*for (int i = 0; i < 5 ++i) {
		classRosterArray[i].print();//change to relivent data
	}*/
}

void Roster::printAverageDaysInCourse(string studentId)
{
}

void Roster::printInvaildEmails()
{
}

//void Roster::printBydegreeProgram(DegreeProgram degreProgram)
//{
//}
