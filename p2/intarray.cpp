// Kenneth Cho
//2325383
//kecho@chapman.edu
//CPSC298-01
//assignment 2 problem 2
/*This program reads up to ten nonnegative integers into an array
called numberArray and then writes the integers back to the screen (console output).*/
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
  int i = 0;   //iterator for the for loop
  int numberArray[10];//an array called numberArray with a size of 10 is created
  numberArray[0] = 1; //the array is filled in with random numbers
  numberArray[1] = 2;
  numberArray[2] = 3;
  numberArray[3] = 4;
  numberArray[4] = 5;
  numberArray[5] = 4;
  numberArray[6] = 3;
  numberArray[7] = 2;
  numberArray[8] = 1;
  numberArray[9] = 0;

  for (i=0;i<10;++i){  //this for loop prints out all the values in the array
    cout << numberArray[i];
    cout << endl;
  }
  return 0;
}
