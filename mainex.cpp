#include <iostream>
using namespace std;

int main(){
  int myVar = 5;
  int *myPtr = &myVar;

  cout << "myVar: " << myVar << endl;
  cout << "myPtr: " << myPtr << endl;
  cout << "deref myPtr: " << *myPtr << endl;

  *myPtr = 8;
  cout << "myVar after update: " << myVar << endl;

  return 0;
}
