#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

//Struct decleration
struct Person
{
char name[20];
float balance;
};

//Function Prototypes---------------------------
int countRecords(int &);
void display(Person [], int&);
void buildPerson(Person [], int&);
void findRichest(Person [], int&);
void deposit(char[], Person, int&);

//Main Function--------------------------------------------------------
int main()
{
  int numberOfRecords = 0;

  countRecords(numberOfRecords);
  Person person[numberOfRecords];
  buildPerson(person, numberOfRecords);
  display(person, numberOfRecords);
  findRichest(person, numberOfRecords);
  // cout << "Enter your full name to deposit money: " << endl;
  // deposit(custName, person, numberOfRecords);
  return 0;
}

//Function to count the number of lines in file.-------------
int countRecords(int &count)
{
ifstream myfile;
myfile.open("data.txt");
string line;
while(getline(myfile, line))
{
  count ++;
}
myfile.close();
}

//Function to fill in the array ----------------------
void buildPerson(Person myArray[], int &count)
{
  float pay;
  string firstName;
  string lastName;
  string fullName;

  ifstream myfile("data.txt");

  for(int i = 0; i < count; i++)
  {
    myfile >> firstName >> lastName >> pay;
    fullName = firstName + " " + lastName;
    myArray[i].balance = pay;
    strcpy(myArray[i].name, fullName.c_str());

  }
  myfile.close();
}

//Function to display array -------------------------------------------
void display(Person myarray[], int& count )
{
  for(int i = 0; i < count; i++)
  {
    cout << myarray[i].name << " " << myarray[i].balance << endl;
  }
}

//Function will search the Struct array
//and find the richest person.-------------------------------------
void findRichest(Person myarray[], int &count)
{
  float highestNum = 0;
  for(int i = 0; i < count; i++)
  {
    if(myarray[i].balance > highestNum)
    {
      highestNum = myarray[i].balance;
    }
  }

  for(int i = 0; i < count; i++)
  {
    if(highestNum == myarray[i].balance)
    {
      cout << "The customer with max balance is: " <<
      myarray[i].name << endl;
    }
  }
}

//
void deposit(char custName[], Person myarray[], int &count)
{
  int index = 0;
  float d = 0;
  float total;

  for(int i = 0; i < count; i++)
  {
    if(strcmp(myarray[i].name, custName = 0))
    {
      index = i;
    }
  }

  cout << index << " How much would you like to deposit? " << endl;
  cin >> d;
  total = d + myarray[index].balance;
  cout << "Now your new balance is: " << total << endl;
}
