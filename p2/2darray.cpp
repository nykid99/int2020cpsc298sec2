// Kenneth Cho
//2325383
//kecho@chapman.edu
//CPSC298-01
//assignment 2 problem 1
/*This program fills the array(int a[4][5];) with numbers typed in at
the key- board. The numbers will be input five per line, on four lines.*/


#include <iostream>
using namespace std;
int main(int argc, char **argv){
  int a[4][5];//2d array is created
  int r,c;    //iterators for the for loops
  for(r=0;r<4;++r){   //this nested for loop is used to get all the inputs for the 2d array which would be a total of 20 numbers.
    for(c=0;c<5;++c){
      cin >> a[r][c];
    }
  }
  for(r=0;r<4;++r){  //this for loop prints out all the values in the 2d array
    for(c=0;c<5;++c){
      cout << a[r][c];
    }
  }
  return 0;
}
