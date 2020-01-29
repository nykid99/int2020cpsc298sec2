// Kenneth Cho
//2325383
//kecho@chapman.edu
//CPSC298-01
//programming assignment 1-problem 4
/*This program  program asks for the cost of the item, the
number of years from now that the item will be purchased, and the rate of inflation. The program then
outputs the estimated cost of the item after the specified period. */


#include <iostream>

using namespace std;

int main()
{
  float cost = 0;       //cost of an item
  float years = 0;      //number of years from that this item will be purchased
  float infRate = 0.0;  //inflation rate from the user(ex: 5.6 percent)
  float infRate2 = 0.0; //inflation rate in fractions. used for the calculation
  int i = 0;            //iterator for the for loop
  cout << "Enter the cost of the item" << endl;  //inputs are entered here
  cin >> cost;
  cout << "Enter the number of years from now that this item will be purchased." << endl;
  cin >> years;
  cout << "Enter the inflation rate (ex: 5.6): " << endl;
  cin >> infRate;
  infRate2 = infRate * 0.01; //inflation rate is converted to fractions
  for(i=0; i<years; i++){    //this for loop applies the inflation rate to the cost of an item depending on how many years the user entered in
    cost *= 1 + infRate2;
  }
  cout << "This is the final cost" << endl; //final cost is printed out
  cout << cost << endl;

  return 0;

}
