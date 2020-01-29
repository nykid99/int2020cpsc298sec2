// Kenneth Cho
//2325383
//kecho@chapman.edu
//CPSC298-01
//assignment 2 problem 2
/*this program reads in a length in feet and inches and output the
equivalent length in meters and centimeters. there are the functions: one for user input, two
for calculating, and one for output(console).a loop that lets the user repeat this computation for
new input values until the user says he or she wants to end the program is included(user has to type exit). There are
0.3048 meters in a foot, 100 centimeters in a meter, and 12 inches in a foot.*/


#include <iostream>
using namespace std;

double usrInput(double f, double i){ //a userinput function that gets the values of the length in feet and inches separately as parameters and turns them into inches for furthur calculation
  double inchLength;
  inchLength = ((f*12) + i);
  return inchLength;
}
double meterCon(double i){ //converts the parameter value to meters
  double met = i * 0.0254;
  return met;
}
double centiCon(double c){ //converts the parameter value to centimeters
  double cen = c * 2.54;
  return cen;
}
void outPut(double x, double y){ //output function that outputs the values
  cout << "your input in meters: " << x << endl;
  cout << "your input in centimeters: " << y << endl;
}

int main(){
  string gamestart; //a string that determines whether the user would like to continue or not
  double feet = 0;  // userinput value of feet
  double inch = 0;  // userinput value of inches
  double inchtotal = 0; //total inches
  double metertotal = 0; //total meters
  double centitotal = 0; //total centimeters
  cout << "Enter start to start the program and exit to end the program" << endl;
  cin >> gamestart;
  while(gamestart == "start"){ //if the user types in start, the program proceeds
    cout << "welcome to the conversion program"<< endl;
    cout << "please enter the feet of the length: "; //user input for the length are acquired separately. first the feet, then inches
    cin >> feet;
    cout << endl;
    cout << "Please enter the inches of the length: ";
    cin >> inch;
    cout << endl;
    inchtotal = usrInput(feet,inch);  //the value of the length in inches is acquired through the first function created
    metertotal = meterCon(inchtotal); // inchtotal is converted into meters and centimeters through these functions
    centitotal = centiCon(inchtotal);
    outPut(metertotal, centitotal); //the results are outputted to the console
    cout << "if you wish to continue, enter start. if not, type exit: ";
    cin >> gamestart; //after all calculations are complete, the program asks the user if they would like to continue calculating
    if(gamestart == "exit"){
      cout << "Aborting program" << endl;
      exit(0);
    }
  }
  if(gamestart == "exit"){ //if the user types exit, the program stops
    cout << "aborting program" << endl;
  }
  return 0;
}
