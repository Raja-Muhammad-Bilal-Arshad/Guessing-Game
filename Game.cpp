#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int main()

{
    string DIFFICULTY;
    int random_number, count = 1, guessed_number, LEVEL, chances;
    cout << "\t\t\t\t\tWELCOME TO GUESSING GAME \n\n\n\n\n";
    cout << "\t\t\t\t.......CHOOSE YOUR GAME DIFFICULTY...........\n1.EASY\n2.NORMAL\n3.HARD\n4.EXTREME\n\n";
    cout << endl << "Enter your level Difficulty(IN CAPITAL LETTERS): ";
    cin >> DIFFICULTY;
    if (DIFFICULTY == "EASY")
        chances = 15;
    else if (DIFFICULTY == "NORMAL")
        chances = 10;
    else if (DIFFICULTY == "HARD")
        chances = 5;
    else if (DIFFICULTY == "EXTREME")
        chances = 3;
    else
    {
        cout << endl << "YOU HAVE GIVEN WRONG INPUT";
        return 1;
 
    cout << "\t\t\t\t.......... CHOOSE YOUR LEVELS..........\nLevel 1 \nLevel 2 \nLevel 3 \nLevel 4 \nLevel 5 \nLevel 6 \nLevel 7 \nLevel 8 \n";
    cout << "Enter your level: ";
    cin >> LEVEL;
    if (!(LEVEL > 0 && LEVEL < 9))
    {
        cout << "YOU HAVE GIVEN WRONG INPUT";
        return 1;
    }

    srand(time(0));
    random_number = (rand() % (LEVEL * 10)) + 1;
    cout << endl << random_number << endl;
    cout << "You have " << chances << " Chances." << endl;
    cout << "Guess the number (from 1 to " << LEVEL * 10 << " ): ";
    cin >> guessed_number;
    while (count <= chances)
    {
        if (guessed_number == random_number)
        {
            system("cls");
            cout << "\n.....................CONGRADULATIONS YOU WON THE GAME............";
            return 0;
        }
        else if (count != (chances))
        {
     
            if (guessed_number > random_number)
                cout << "You are far\n";
            else
                cout << "You are near\n";
            cout << "you have " << chances - count << " chances left.";
            cout << "\nGuess the number (from 1 to " << LEVEL * 10 << " ): ";
            cin >> guessed_number;
            count++;
        }
    }
    cout << "....Sorry You are out of Choices....";

    }}
