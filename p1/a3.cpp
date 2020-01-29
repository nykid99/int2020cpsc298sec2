// Kenneth Cho
//2325383
//kecho@chapman.edu
//CPSC298-01
//programming assignment 1-problem 3
/*This program reads in the number of hours
worked in a week as input and that will then output the worker’s gross pay, each withholding amount, and
the net take-home pay for the week. An employee for this program is paid at a rate of $16.00 per hour for regular hours worked in a week. Any hours over that
are paid at the overtime rate of one and one-half times that. From the worker’s gross pay, 6% is withheld
for Social Security tax, 14% is withheld for federal income tax, 5% is withheld for state income tax, and
$10 per week is withheld for medical insurance. */


#include <iostream>

using namespace std;

int main()
{                       //these are the values needed for the program
  float input = 0;      //number of hours worked
  float overTime = 0;   //overtime hours
  float grossPay = 0;   //grosspay value
  float socialSec = 0;  //tax for social security
  float fedIncome = 0;  //tax for fedIncome
  float stateIncome = 0; //tax for stateIncome
  float takeHome = 0;    //net takehome pay
  cout << "Enter the number of hours worked" << endl;  //gets the number of hours from user
  cin >> input;
  if(input < 40){  //if number of hours is less than 40, overtime rate is not charged
    overTime = 0;
    cout << "Less than 40 hours no overtime" << endl;
  }
  else{ //if it is more than 40, extra hours are charged at overtime rate
    cout << "More than 40 hours. extra hours will be charged at overtime rate" << endl;
    overTime = input - 40; //overtime hours are deducted from the total hours
    cout << "Overtime hours: " << overTime << endl;

  }//grosspay is determined by charging the normal hours with the normal rates of 16 an hour and extra hours are charged with one and one half of it and adding them up
  grossPay = ((input - overTime) * 16) + (overTime * (16 * 1.5));
  socialSec = (grossPay * 0.06); //various tax amounts are determined from the percentages provided
  fedIncome = (grossPay * 0.14);
  stateIncome = (grossPay * 0.05);
  takeHome = (grossPay * 0.75) - 10; //takehome pay is determined by deducting total tax amount from the grosspay including a 10 dollar medical insurance fee
  cout << "Grosspay: " << grossPay << endl;
  cout << "Social Security tax: " << socialSec << endl;  //results are printed out
  cout << "Federal Income tax: " << fedIncome << endl;  //all the amounts are printed out
  cout << "State Income tax: " << stateIncome << endl;
  cout << "medical insurance: 10 dollars" << endl;
  cout << "Take home pay: " << takeHome << endl;



  return 0;




}
