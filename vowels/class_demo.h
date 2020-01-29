#include <iostream>
#include <string>

using namespace std;

class CPSC298Utils
{
  public:
    CPSC298Utils(); //default constructor
    int countVowels(string input);


  string getName();
  int getAge();
  string getEyeColor();

  void setName(string name);
  void setAge(int age);
  void setEyeColor(string eye_color);

  //examples for getters and setters not related to the program
  private:
    //I currently do not have any private vars
};
