// Kenneth Cho
//2325383
//kecho@chapman.edu
//CPSC298-01
//programming assignment 1-problem 1
/* this program reads the weight (console input) of a package
of breakfast cereal in ounces and output the weight in metric tons as well as the number of boxes needed
to yield one metric ton of cereal.*/


#include <iostream>

using namespace std;

int main()// main function
{
  float meton = 35273.92; //metric ton in ounces
  float cereal; // cereal amount
  float cerealTon; //cereal amount in ton
  int numbox; // number of boxes needed
   cout << "type in the weight of cereal in ounces: " << endl;
   cin >> cereal; //gets the user input for the weight of cereal in ounces
   cerealTon = cereal/meton;  // cereal's weight in ton is calculated
   numbox = meton/cereal;     // number of boxes needed is calculated

   cout << "The weight of breakfast cereal in ounces: "; //outputs the values needed
   cout << cerealTon << endl;
   cout << "The number of boxes needed to yield one metric ton of cereal: ";
   cout << numbox << endl;

   return 0

}
