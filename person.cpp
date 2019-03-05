#include"person.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

Person::Person()
{
  lastName = " ";
  firstName = " ";
  payRate = 0.0;
  hoursWorked = 0.0;
}

void Person::setLastName(string lName)
{
  lastName = lName;
}
string Person::getLastName()
{
  return lastName;
}

void Person::setFirstName(string fName)
{
  firstName = fName;
}
string Person::getFirstName()
{
  return firstName;
}

void Person::setPayRate(float rate)
{
  payRate = rate;
}
float Person::getPayRate()
{
  return payRate;
}
void Person::setHoursWorked(float hours)
{
  hoursWorked = hours;
}
float Person::getHoursWorked()
{
  return hoursWorked;
}

float Person::totalPay()
{
  float total = 0.0;
  total = hoursWorked * payRate;
  return total;
}

string Person::fullName()
{
  string f_Name;

  f_Name = firstName + " " + lastName;

  return f_Name;
}
