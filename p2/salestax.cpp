//Kenneth Cho
//2325383
//kecho@chapman.edu
//CPSC198-01
//assignemnt 2 problem 4
/*This program creates a function called addTax. The function addTax has two formal
parameters: taxRate, which is the amount of sales tax expressed as a percent; and cost, which is the cost
of an item before tax. The function returns the value (float) of cost so that it includes sales tax*/



#include <iostream>
using namespace std;

float addTax(float taxRate, float cost){ //addTax function is created
  float taxP; //tax percentage
  float finCost; // final cost
  taxP = taxRate *0.01; //taxP turned into fractions
  finCost = (taxP + 1) * cost; //determines the final cost with the tax percentage
  return finCost; //returns the final cost value
}
int main(int argc, char **argv){
  cout << addTax(3,5) << endl; //main function to test out the function created above
  return 0;
}
