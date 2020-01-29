#include "class_demo.h"

CPSC298Utils::CPSC298Utils(){
  //INITIALIZE VARIABLES TO DEFAULT VALUES
}
//now it's time to implement my body
int CPSC298Utils::countVowels(string input)
{
  int count = 0;
  char c = '\0';
  for(int i = 0; i < input.size(); ++i)
  {
    c=tolower(input[i]);

    if(c=='a'){
      count++;
    }
    else if(c=='e'){
      count++;
    }
    else if(c=='i'){
      count++;
    }
    else if(c=='o'){
      count++;
    }
    else if(c=='u'){
      count++;
    }
  }

  return count;
}

//You can seperate these into three parts
