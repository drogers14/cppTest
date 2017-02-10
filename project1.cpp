//Destiny Rogers
//Project 1

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std; 

int main()
{
  srand ( time(NULL) );
  int userGuess;
  int randomNumber; 
  randomNumber = rand() % 10 + 1;
  do {
    cout<< "Guess the computer's number 1-10."<<endl;
    cin>> userGuess; 

    if(userGuess<randomNumber){
      cout<<"higher!"<<endl;
    }
    if(userGuess>randomNumber){
      cout<<"lower!"<<endl;
    }
  }while(userGuess != randomNumber);
  if (userGuess== randomNumber){
    cout<<"You right lmao. You win!"<<endl;
  }
  return 0;
}

