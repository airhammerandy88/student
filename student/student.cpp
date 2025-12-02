// student.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Student.h"

using namespace std;





Student::Student()
{
}

Student::Student(string studentId, string firstName, string lastName, string emailAddress, int age, int numDaysToCompleteCourse[5], DegreeProgram)
{
}

string Student::GetStudentId() const
{
    return string();
}

string Student::GetFirstName() const
{
    return string();
}

string Student::GetLastName() const
{
    return string();
}

string Student::GetEmailAddress() const
{
    return string();
}

int Student::GetAge() const
{
    return 0;
}

void Student::SetStudentID(string studentId)
{
}

void Student::SetFirstName(string firstName)
{
}

void Student::SetLastName(string lastName)
{
}

void Student::SetEmailAddres(string emailAddress)
{
}

void Student::SetAge(int age)
{
}

void Student::PrintStudentData()
{
    cout << "A1   " << "First Name:   " << GetFirstName << "    ";  //strange tab spacing
    cout << "Last name:   " << GetLastName << "   ";
    cout << "Email:   " << GetEmailAddress << "   ";
    cout << "Age:   " << GetAge << "    ";
    cout << "daysInCourse:   " << GetNumDaysToCompleteCourse << "   ";
    cout << "Degree Program:    " << DegreeProgram << "   ";
}
