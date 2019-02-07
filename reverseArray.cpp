#include<iostream>
using namespace std;

void reverseArray(int [], int, int );
void printArray(int [], int );

int main()
{
  int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  //to print original myArray
  cout << "The original array is: " << '\n';
   printArray(array, 10);
   cout << '\n';

  //Function call to reverse myArray
  reverseArray(array, 0, 9);

  cout << "The reversed array is: " << '\n';
  printArray(array, 10);
  cout << '\n';

  return 0;
}

void reverseArray(int myArray[], int start, int end)
{
    while (start < end)
    {
        int temp = myArray[start];
        myArray[start] = myArray[end];
        myArray[end] = temp;
        start++;
        end--;
    }
}

void printArray(int myArray[], int size)
{
  for(int i = 0; i < size; i++)
  {
    cout << myArray[i] << " ";
  }
}
