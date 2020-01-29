// Kenneth Cho
//2325383
//kecho@chapman.edu
//CPSC298-01
//programming assignment 1-problem 2
/*This program determines whether a meeting room is in violation of fire law regula- tions regarding
the maximum room capacity. The program will read in the maximum room capacity and the number of
people to attend the meeting. If the number of people is less than or equal to the maximum room capacity,
the program announces that it is legal to hold the meeting and tells how many additional people may
legally attend. If the number of people exceeds the maximum room capacity, the program announces that
the meeting cannot be held as planned due to fire regulations and tells how many people must be excluded
in order to meet the fire regulations.ct of the two numbers*/

#include <iostream>

using namespace std;

int main()
{
  int maxcap = 0; // room max capacity value
  int attend = 0; // number of people attending
  int addppl = 0; // additional people allowed to attend
  int excppl = 0; // number of people that must be excluded to meet the requirements of the room capacity.
  cout << "Enter the max capacity of the room:" << endl;  //inputs for the values needed are acquired here
  cin >> maxcap;
  cout << "Enter the number of people attending the meeting:" << endl;
  cin >> attend;
  if(maxcap == attend){  // if the number of people attending is the same as the max capacity, it prompts the user that it is legal to hold the meeting
    cout << "it is legal to hold the meeting!";
  }
  else if(maxcap > attend){ //if maxcapacity is more than the number of people attending, it prompts the user that it is legal to hold the meeting and the additional number of people allowed to attend
    cout << "It is legal to hold the meeting" << endl;
    addppl = maxcap - attend;
    cout << "an additional of " << addppl << " people may enter";
  }//if the number of people attending are more that the max capacity, the program announces that it is illegal to hold the meeting, and outputs the number of people that should be exclueded to make it legal
  else if( maxcap < attend){
    cout << "It is illegal to hold the meeting" << endl;
    excppl = attend - maxcap;
    cout << excppl <<" people must leave in order for the meeting to be legal" << endl;
  }

  return 0;
}
