// Kenneth Cho
//2325383
//kecho@chapman.edu
//CPSC298-01
//assignment 3
/*This is a cpp file for the pet class. it contains the definition of the accessors and mutators
declared in the header file*/

#include <iostream>
#include "Pet.h"
#include <string>


using namespace std;

string Pet::getName()  //accessors and mutators for the member variables in the header file
{
  return m_name;
}
int Pet::getAge()
{
  return m_age;
}
string Pet::getType()
{
  return m_type;
}
double Pet::getWeight()
{
  return m_weight;
}
void Pet::setName(string name)
{
  m_name = name;
}
void Pet::setAge(int age)
{
  m_age = age;
}
void Pet::setType(string type)
{
  m_type = type;
}
void Pet::setWeight(double weight)
{
  m_weight = weight;
}
