#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include "../header/Hard_Mode.hpp"

using namespace std;


vector<string> Hoptions = {"Serendipity", "Quixotic", "Bayou", "Sphinx", "Jalapeno", "Monocle", "Bazaar",
                           "Genocide", "Guillotine", "Warzone", "Whistling", "Sundae", "Cacophony",
                           "Ephemeral", "Glimmer", "Archipelago", "Serengeti", "Nostalgia", "Xylophone"};

void Hard_Mode::HmainSystem()
{
    // This generates a seed <better to memorise>
    srand(static_cast<unsigned int>(time(0)));
    // Create an int which stores the amount of string are there in the vector <in this case 20 strings>.
    int vectorSizeH = Hoptions.size();
    // Index of Vector starts at 0 so it's 19 not 20
    // Create an int which create a function which goes from 1 to 19 <because 19 strings in the vector>
    int randomIndexH = rand() % vectorSizeH;
    // Create a non-changeable string reference to a random string in the vector.
    // For example, if the random number is 10, it will select the 10th string in the vector, which is "Whistling". 
    // This string will be stored in the constant reference variable named selectedStringH.
    // Printing cout << selected_string; will then output "Whistling".
    const string &selectedStringH = Hoptions[randomIndexH];
    // I created a normal string wwhich will be initialized using () - method, 
    // In this string it will print amount of hyphens according to the length of the selectedStringH(Whistling).
    string displayStringH(selectedStringH.length(), '-');
    // I initialized a variable Hattempts which will track the chances the player can have if he makes a mistake.
    Hattempts = 6;
    // Basic Introduction till line 42.
    cout << "Welcome To Hard Mode" << endl;
    sleep(1);
    cout << "You will have to guess a word, and you have only 6 attempts." << endl;
    sleep(1);
    cout << "Good Luck!" << endl;
    sleep(1);
    system("cls");
    // Main System
    // Created A while loop which runs with the condition that The boolean HwordGuessed is false and
    //  Hattempts is greater than 0<it is 6>.
    while (!HwordGuesssed && Hattempts > 0)
    {
        // it replaces the first "-" with the actual word (For Whistling it would be W--------)
        displayStringH[0] = selectedStringH[0];
        // This displays the hyphens and tells how much Hattempts are left.
        cout << "Current display: " << displayStringH << " " << Hattempts << " attempts left." << endl;
        // Basic UUser Input.
        cout << "Guess a letter: ";
        cin >> HuserGuess;
        cout << endl;

        // Initialize the flag before checking each letter
        HcorrectGuess = false; 

        // This for-loop iterates through the word i.e., Whistling, it started from W and then ends at g
        for (int i = 0; i < selectedStringH.length(); ++i)
        {
        // The if-statement checks that if the userinput matches any word of the variable for example,
        // If the user enters 'i', it checks if the i appears in the word Whistling, since it does 
        // it replaces the hyphen '-' with i.
        // it  will look like this, W-i---i--,
        // it also makes the Hcorrectguess boolean true
        // why it did is in the next code
            if (HuserGuess == selectedStringH[i])
            {
                displayStringH[i] = HuserGuess;
                HcorrectGuess = true;
            }
        }
        // I created this bool because of the following reasons:
        // If the user entered a character which is not in the word, I can create a if statementt about it
        // this if checks if the user entered the input is not in the word it decrements or in simple
        // Hattemtps = Hattemtps - 1;
        // and then the basic Incorrect guess and tell how many chances are left till game over.
        if (!HcorrectGuess)
        {
            Hattempts--;
            cout << "Incorrect guess! Try again. (" << Hattempts << ") attempts left." << endl;
        }

        // This if-statement checks taht if the displayStringH has been completed meaning all the hyphens are gone
        // it will incorrecnt the while loops conditon by seting the HwordGuessed bool to true.
        // And then prints out the Winner Message
        if (displayStringH == selectedStringH)
        {
            HwordGuesssed = true;
            cout << "Congratulations! You guessed the word: " << selectedStringH << endl;
        }
    // The while loop ends here.
    }
    // if the user has not guessed the word and ran out of attempts, The if-state will run
    if (!HwordGuesssed)
    {
        cout << "Ah Shucks! You ran out of attempts. The correct answer was " << selectedStringH << ".\n"
             << "Better Luck Next Time." << endl;
    }
    // This loop starts wwhen it is true since it is.
    // This is jusst a infinite loop because you acn only exit the while loop if you have
    // guessed all the words
    while (true)
    {
        cout << "Enter 'r' to retry, 'i' to go to the next level, or 'e' to exit: ";
        cin >> Hynretry;
        // checks what user has inputed
        if (Hynretry == 'r' || Hynretry == 'R')
        {
            cout << "Retrying..." << endl;
            sleep(2);
            system("cls");
            Hard_Mode ee;
            break;
        }
        else if (Hynretry == 'e' || Hynretry == 'E')
        {
            cout << "Goodbye..." << endl;
            sleep(1);
            exit(0);
        }
        else if (Hynretry == 'i' || Hynretry == 'I')
        {
            cout << "Going to IMPOSSIBLE Mode" << endl;
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
    // basic constructor so if i just create an object it does its work.
Hard_Mode::Hard_Mode()
{
    HmainSystem();
}

Hard_Mode::~Hard_Mode()
{
}
