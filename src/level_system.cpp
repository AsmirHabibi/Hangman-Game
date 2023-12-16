#include <iostream>
#include <unistd.h>
#include "../header/level_system.hpp"
#include "../header/Easy_Mode.hpp"
#include "../header/Medium_Mode.hpp"
#include "../header/Hard_Mode.hpp"
#include "../header/IMPOSSIBLE_Mode.hpp"

using namespace std;

Level_System::Level_System()
{
    system("cls");
    cout << "You have few Levels to Choose From:" << endl;
    cout << "Select the Level by typing its number." << endl;
    cout << "1. Easy Mode (easy words with plenty of attempts.)" << endl;
    cout << "2. Medium Mode (intermediate words with 10 attempts.)" << endl;
    cout << "3. Hard Mode (difficult words with 6 attempts.)" << endl;
    sleep(1);
    cout << "4. Impossible Mode (ONLY CHOOSE IF YOU WANT TO FRY YOU BRAIN!!)" << endl;

    cout << ": ";
    cin >> inpN;
    for (;;) 
    {
        if (inpN == 1 || inpN == 2 || inpN == 3 || inpN == 4)
        {
            break;
        }
        else
        {
            cout << "Wrong Number, chose wisely." << endl;
            cin >> inpN;
        }
    }
    switch (inpN)
    {
    case 1:
        /* code */
        cout << "Are you sure You want to Play Easy Mode?" << endl;
        cin >> yn;
        for (;;)
        {
            if (yn == "y" || yn == "Y" || yn == "yes" || yn == "Yes" || yn == "n" || yn == "N" || yn == "no" || yn == "No")
            {
                break;
            }
            else
            {
                cout << "Invalid Input! Try Again." << endl;
                cin >> yn;
            }
        }
        if (yn == "y" || yn == "Y" || yn == "yes" || yn == "ye" || yn == "Ye")
        {
            cout << "Going To Easy Mode.." << endl;
            sleep(2);
            system("cls");
            Easy_Mode easy_mode;
        }
        else if (yn == "n" || yn == "N" || yn == "no" || yn == "No")
        {
            /* code */
            Level_System level_system;
        }
        break;

    case 2:
        /* code */
        cout << "Are you sure You want to Play Medium Mode?" << endl;
        cin >> yn;
        for (;;)
        {
            if (yn == "y" || yn == "Y" || yn == "yes" || yn == "Yes" || yn == "n" || yn == "N" || yn == "no" || yn == "No")
            {
                break;
            }
            else
            {
                cout << "Invalid Input! Try Again." << endl;
                cin >> yn;
            }
        }
        if (yn == "y" || yn == "Y" || yn == "yes" || yn == "ye" || yn == "Ye")
        {
            cout << "Going To Medium Mode.." << endl;
            sleep(2);
            system("cls");
            Medium_Mode medium_mode;
        }
        else if (yn == "n" || yn == "N" || yn == "no" || yn == "No")
        {
            /* code */
            Level_System level_system;
        }
        break;

    case 3:
        /* code */
        cout << "Are you sure You want to Play Hard Mode?" << endl;
        cin >> yn;
        for (;;)
        {
            if (yn == "y" || yn == "Y" || yn == "yes" || yn == "Yes" || yn == "n" || yn == "N" || yn == "no" || yn == "No")
            {
                break;
            }
            else
            {
                cout << "Invalid Input! Try Again." << endl;
                cin >> yn;
            }
        }
        if (yn == "y" || yn == "Y" || yn == "yes" || yn == "ye" || yn == "Ye")
        {
            cout << "Going To Hard Mode.." << endl;
            sleep(2);
            system("cls");
            Hard_Mode hard_mode;
        }
        else if (yn == "n" || yn == "N" || yn == "no" || yn == "No")
        {
            /* code */
            Level_System level_system;
        }
        break;

    case 4:
        /* code */
        cout << "Are you sure You want to Play IMPOSSIBLE Mode?" << endl;
        cin >> yn;
        for (;;)
        {
            if (yn == "y" || yn == "Y" || yn == "yes" || yn == "Yes" || yn == "n" || yn == "N" || yn == "no" || yn == "No")
            {
                break;
            }
            else
            {
                cout << "Invalid Input! Try Again." << endl;
                cin >> yn;
            }
        }
        if (yn == "y" || yn == "Y" || yn == "yes" || yn == "ye" || yn == "Ye")
        {
            cout << "Going To IMPOSSIBLE Mode.." << endl;
            sleep(2);
            system("cls");
            IMPOSSIBLE_Mode impossible_mode;
        }
        else if (yn == "n" || yn == "N" || yn == "no" || yn == "No")
        {
            /* code */
            Level_System level_system;
        }
        break;

    default:
        break;
    }
}
Level_System::~Level_System()
{
}

// int main(){
//     Level_System l;
//     return 0;
// }