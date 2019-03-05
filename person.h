//begin person.h
#ifndef PERSON_H
#define PERSON_H

#include <string>
#include<iostream>
using namespace std;
class Person
{
public:
    Person();
    void setLastName(string lName);
    string getLastName();
    void setFirstName(string fName);
    string getFirstName();
    void setPayRate(float rate);
    float getPayRate();
    void setHoursWorked(float hours);
    float getHoursWorked();
    float totalPay();
    string fullName();

  private:
      string lastName;
      string firstName;
      float  payRate;
      float  hoursWorked;
};
#endif // end person.h
