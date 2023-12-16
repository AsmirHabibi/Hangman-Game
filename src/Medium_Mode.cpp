#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include "../header/Medium_Mode.hpp"

using namespace std;


vector<string> Moptions = {"Scramble", "Word", "Absence", "Crafty", "Sigma", "Pensive", "Prestige", "Quirk",
                           "Breezy", "Cauldron", "Minecraft", "Valorant", "Emo", "ChatGPT", "Bard", "Bizarre",
                           "Ambiguous", "Palestine", "Humility", "Labyrinth", "Pendulum", "Cheerful"};

void Medium_Mode::Main_System()
{
    srand(static_cast<unsigned int>(time(0)));

    int vectorSizeM = Moptions.size();
    int randomIndexM = rand() % vectorSizeM;
    const string &selectedStringM = Moptions[randomIndexM];

    string displayStringM(selectedStringM.length(), '-');
    Mattempts = 10;

    cout << "Welcome To Medium Mode" << endl;
    sleep(1);
    cout << "You will have to guess a word, and you have 10 attempts." << endl;
    sleep(1);
    cout << "Good Luck!" << endl;
    sleep(1);
    system("cls");

    while (!MwordGuessed && Mattempts > 0)
    {
        displayStringM[0] = selectedStringM[0];
        cout << "Current display: " << displayStringM << " " << Mattempts << " attempts left." << endl;

        cout << "Guess a letter: ";
        cin >> MuserGuess;
        cout << endl;

        McorrectGuess = false; // Initialize the flag before checking each letter

        for (int i = 0; i < selectedStringM.length(); ++i)
        {
            if (MuserGuess == selectedStringM[i])
            {
                displayStringM[i] = MuserGuess;
                McorrectGuess = true;
            }
        }

        if (!McorrectGuess)
        {
            Mattempts--;
            cout << "Incorrect guess! Try again. (" << Mattempts << ") attempts left." << endl;
        }

        if (displayStringM == selectedStringM)
        {
            MwordGuessed = true;
            cout << "Congratulations! You guessed the word: " << selectedStringM << endl;
        }
    }

    if (!MwordGuessed)
    {
        cout << "Ah Shucks! You ran out of attempts. The correct answer was " << selectedStringM << ".\n"
             << "Better Luck Next Time." << endl;
    }

    while (true)
    {
        cout << "Enter 'r' to retry, 'h' to go to the next level, or 'e' to exit: ";
        cin >> Mynretry;

        if (Mynretry == 'r' || Mynretry == 'R')
        {
            cout << "Retrying..." << endl;
            sleep(2);
            system("cls");
            Medium_Mode mm;
            break;
        }
        else if (Mynretry == 'e' || Mynretry == 'E')
        {
            cout << "Goodbye..." << endl;
            sleep(1);
            exit(0);
        }
        else if (Mynretry == 'h' || Mynretry == 'H')
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

Medium_Mode::Medium_Mode()
{
    Main_System();
}

Medium_Mode::~Medium_Mode()
{
}
