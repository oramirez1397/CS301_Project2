#include"person.h"
#include"person.cpp"
#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;


int countEmployees(int &);
void readData(Person[], int&);
void writeData(Person[], int&);

int main()
{
  int counter = 0;
  countEmployees(counter);
  Person person[counter];
  readData(person, counter);
  writeData(person, counter);

  return 0;
}

int countEmployees(int &index)
{
ifstream myfile;
myfile.open("input.txt");
string line;
while(getline(myfile, line))
{
  index ++;
}
myfile.close();
}

void readData(Person myarray[], int &index)
{
  string firstname;
  string lastname;
  float numPay;
  float numHours;

  ifstream myfile;
  myfile.open("input.txt");

  for(int i = 0; i < index; i++)
  {
    myfile >> firstname >> lastname >> numHours >> numPay;
    myarray[i].setFirstName(firstname);
    myarray[i].setLastName(lastname);
    myarray[i].setHoursWorked(numHours);
    myarray[i].setPayRate(numPay);
  }
  myfile.close();
}

void writeData(Person myarray[], int& index )
{
  ofstream myFile;
  myFile.open("output.txt");

  for(int i = 0; i < index; i++)
  {
    myFile << myarray[i].fullName() << " ";
    myFile << fixed << setprecision(2) << myarray[i].totalPay();
    myFile << endl;
  }
  myFile.close();
}
