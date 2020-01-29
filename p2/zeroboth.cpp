// Kenneth Cho
//2325383
//kecho@chapman.edu
//CPSC298-01
//assignment 2 problem 3
/* this program creates a void function called zeroBoth that has two call-by- reference
parameters, both of which are variables of type int, and sets the values of both variables to 0.*/


#include <iostream>
using namespace std;

void zeroboth(int i, int o){ //void function called zeroboth with two parameters of value int is created
  i = 0;  //in this function, the values in the parameters become 0
  o = 0;
  cout << "i: "<< i << endl; //the values are then printed out.
  cout << "o: "<< o << endl;
}
int main(int argc, char **argv){ // this main function tests the function.
  int j = 1;   //these random variables are created
  int k = 3;   
  zeroboth(j,k);
  return 0;
}
