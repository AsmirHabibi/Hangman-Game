#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include "../header/IMPOSSIBLE_Mode.hpp"
#include "../header/level_system.hpp"

using namespace std;


vector<string> Ioptions = {"Gnashing", "Sphygmomanometer", "Queueing", "Tchotchke", "Wraith", "Schadenfreude", "Bazaar",
                           "Strengthsfinder", "Xenoglossy", "Pneumonoultramicroscopicsilicovolcanoconiosis", "Kakorrhaphuia", "Mamihlapinatapai", "Mnemophobia",
                           "Hippopotomonstrosesquippedaliophobia", "Sphygmomanometer", "Ubiquitous", "Serendipity", "Tingo"};

void IMPOSSIBLE_Mode::ImainSystem()
{
    srand(static_cast<unsigned int>(time(0)));
    
    int vectorSizeI = Ioptions.size();
    
    int randomIndexI = rand() % vectorSizeI;
    
    const string &selectedStringI = Ioptions[randomIndexI];
    
    string displayStringH(selectedStringI.length(), '-');

    Iattempts = 4;
    cout << "Welcome To IMPOSSIBLE Mode" << endl;
    sleep(1);
    cout << "You will have to guess a word, and you have ONLY 4 attempts." << endl;
    sleep(2);
    cout << "Good Luck!" << endl;
    sleep(1);
    system("cls");
    while (!IwordGuesssed && Iattempts > 0)
    {
        displayStringH[0] = selectedStringI[0];
        cout << "Current display: " << displayStringH << " " << Iattempts << " attempts left." << endl;
        cout << "Guess a letter: ";
        cin >> IuserGuess;
        cout << endl;

        IcorrectGuess = false; 

        for (int i = 0; i < selectedStringI.length(); ++i)
        {
            if (IuserGuess == selectedStringI[i])
            {
                displayStringH[i] = IuserGuess;
                IcorrectGuess = true;
            }
        }
        if (!IcorrectGuess)
        {
            Iattempts--;
            cout << "Incorrect guess! Try again. (" << Iattempts << ") attempts left." << endl;
        }

        if (displayStringH == selectedStringI)
        {
            IwordGuesssed = true;
            cout << "Congratulations! You guessed the word: " << selectedStringI << endl;
        }
    }
    if (!IwordGuesssed)
    {
        cout << "Ah Shucks! You ran out of attempts. The correct answer was " << selectedStringI << ".\n"
             << "Better Luck Next Time." << endl;
    }
    while (true)
    {
        cout << "Enter 'r' to retry, 'l' to go to the main menu, or 'e' to exit: ";
        cin >> Iynretry;
        if (Iynretry == 'r' || Iynretry == 'R')
        {
            cout << "Retrying..." << endl;
            sleep(2);
            system("cls");
            IMPOSSIBLE_Mode ii;
            break;
        }
        else if (Iynretry == 'e' || Iynretry == 'E')
        {
            cout << "Goodbye..." << endl;
            sleep(1);
            exit(0);
        }
        else if (Iynretry == 'l' || Iynretry == 'L')
        {
            cout << "Going to Main Menu" << endl;
            sleep(2);
            Level_System lllllllllllll;
        }
        else
        {
            cout << "\nInvalid input. Please enter 'r', 'h', or 'e'." << endl;
        }
    }
}
IMPOSSIBLE_Mode::IMPOSSIBLE_Mode()
{
    ImainSystem();
}

IMPOSSIBLE_Mode::~IMPOSSIBLE_Mode()
{
}
