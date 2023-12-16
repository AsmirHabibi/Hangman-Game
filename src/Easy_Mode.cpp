#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include "../header/Easy_Mode.hpp"

using namespace std;
vector<string> options = {"Hello", "Banana", "Cherry", "Mango", "Pineapple",
                          "Strawberry", "Watermelon", "Grape", "Kiwi", "Orange", "Blueberry", "Carrot", "Broccoli", "Spinach", "Tomato", "Cucumber", "Bell Pepper", "Eggplant",
                          "Lettuce", "Potato", "Onion", "Cabbage", "Poor", "Happy"};

void Easy_Mode::mainSystem()
{
    srand(static_cast<unsigned int>(time(0)));

    int vectorSize = options.size();
    int randomIndex = rand() % vectorSize;
    const string &selectedString = options[randomIndex];

    string displayStringM(selectedString.length(), '-');
    attempts = 10;

    cout << "Welcome To Easy Mode" << endl;
    sleep(1);
    cout << "You will have to guess a word, and you have 20 attempts." << endl;
    sleep(1);
    cout << "Good Luck!" << endl;
    sleep(1);
    system("cls");

    while (!wordGuessed && attempts > 0)
    {
        displayStringM[0] = selectedString[0];
        cout << "Current display: " << displayStringM << " " << attempts << " attempts left." << endl;

        cout << "Guess a letter: ";
        cin >> userGuess;
        cout << endl;

        correctGuess = false; // Initialize the flag before checking each letter

        for (int i = 0; i < selectedString.length(); ++i)
        {
            if (userGuess == selectedString[i])
            {
                displayStringM[i] = userGuess;
                correctGuess = true;
            }
        }

        if (correctGuess)
        {
            attempts--;
            cout << "Incorrect guess! Try again. (" << attempts << ") attempts left." << endl;
        }

        if (displayStringM == selectedString)
        {
            wordGuessed = true;
            cout << "Congratulations! You guessed the word: " << selectedString << endl;
        }
    }

    if (!wordGuessed)
    {
        cout << "Ah Shucks! You ran out of attempts. The correct answer was " << selectedString << ".\n"
             << "Better Luck Next Time." << endl;
    }

    while (true)
    {
        cout << "Enter 'r' to retry, 'h' to go to the next level, or 'e' to exit: ";
        cin >> ynretry;

        if (ynretry == 'r' || ynretry == 'R')
        {
            cout << "Retrying..." << endl;
            sleep(2);
            system("cls");
            Easy_Mode easy_mode;
            break;
        }
        else if (ynretry == 'e' || ynretry == 'E')
        {
            cout << "Goodbye..." << endl;
            sleep(1);
            exit(0);
        }
        else if (ynretry == 'h' || ynretry == 'H')
        {
            cout << "Going to Hard Mode" << endl;
            sleep(1);
            cout << "WIP!" << endl;
            sleep(2);
            exit(0);
        }
        else
        {
            cout << "\nInvalid input. Please enter 'r', 'h', or 'e'." << endl;
        }
    }
}

Easy_Mode::Easy_Mode()
{
    mainSystem();
}

Easy_Mode::~Easy_Mode()
{
}
