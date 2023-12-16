#include <iostream>
#include <unistd.h>
#include "../header/greet.hpp"

using namespace std;


    Greet::Greet(){
 cout << "Welcome To Hangman Game!" << endl;
 sleep(1);
 cout << "As you know, You will be given a few attempts to guess a word, and blah blah blah." << endl;
 sleep(2);
 cout << "Let's get started." << endl;
    }
    Greet::~Greet(){}

// int main(){
//     Greet g;
//     return 0;
// }