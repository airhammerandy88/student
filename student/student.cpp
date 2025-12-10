// student.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Student.h"

using namespace std;





Student::Student()
{
}

Student::Student(string studentId, string firstName, string lastName, string emailAddress, int age)//add degree and maybe array
{
}

string Student::GetStudentId() const
{
    return string();
}

string Student::GetFirstName() const
{
    return firstName;
}

string Student::GetLastName() const
{
    return lastName;
}

string Student::GetEmailAddress() const
{
    return emailAddress;
}

int Student::GetAge() const
{
    return age;
}

void Student::SetStudentID(string sId)
{
    studentId = sId;
}

void Student::SetFirstName(string fName)
{
    firstName = fName;

}

void Student::SetLastName(string lName)
{
    lastName = lastName;
}

void Student::SetEmailAddres(string eAddress)
{
    emailAddress = eAddress;
}

void Student::SetAge(int aGe)
{
    age = aGe;
}

void Student::PrintStudentData(string firstName, string lastName, string emailAddress) //degree
{
    cout << "A1   " << "First Name:   " << firstName << "    " << endl;  //strange tab spacing
    cout << "Last name:   " << lastName << "   " << endl;
    cout << "Email:   " << emailAddress << "   " << endl;
    cout << "Age:   " << age << "    " << endl;
    cout << "daysInCourse:   " << GetNumDaysToCompleteCourse << "   " << endl;
   // cout << "Degree Program:    " << degreeVal << "   " << endl;
}
