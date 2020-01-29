// Kenneth Cho
//2325383
//kecho@chapman.edu
//CPSC298-01
//assignment 3
/*This is a header file for the pet class. it contains the default constructor and the accessors and mutators without
the implementation definitions. it also contains private member variables*/


#include <iostream>
using namespace std;

class Pet{

public:
  Pet(){
    m_name = "Frank";
    m_age = 2;
    m_weight = 54;
    m_type = "dog";
  }
  string getName();
  int getAge();
  string getType();
  double getWeight();

  void setName(string name);
  void setAge(int age);
  void setType(string type);
  void setWeight(double weight);
private:
  string m_name;
  int m_age;
  string m_type;
  double m_weight;
};
