// Kenneth Cho
//2325383
//kecho@chapman.edu
//CPSC298-01
//assignment 3
/*This is a main.cpp file for the pet class. it creates two instances of pet objects and prints out the
information stored in them using the accessors and mutators*/


#include <iostream>
#include "Pet.h"
#include <string>
using namespace std;
int main()
{
  Pet pet1; //two pet objects
  Pet pet2;

  cout << "name: " << pet1.getName() << endl; //prints out the values in the default constructor using accessors
  cout << "age: " << pet1.getAge() << endl;
  cout << "weight: " << pet1.getWeight() << endl;
  cout << "type: " << pet1.getType() << endl;

  string name = "Thanos";  //new values created for the second object
  int age = 1000;
  string type = "cat";
  double weight = 477;

  pet2.setName(name); //used mutators to set the values for the second pet object
  pet2.setAge(age);
  pet2.setType(type);
  pet2.setWeight(weight);

  cout << "name: " << pet2.getName() << endl; //prints out the values inserted into the second pet object
  cout << "age: " << pet2.getAge() << endl;
  cout << "weight: " << pet2.getWeight() << endl;
  cout << "type: " << pet2.getType() << endl;

}
