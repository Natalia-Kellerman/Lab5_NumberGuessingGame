/*
Natalia Kellerman 
Lab 5 Number Guessing Game
Due: 27 Oct. 2021
A number-guessing game in which the computer selects a random number in the range of 0 to 100,
and users get a maximum of 20 attempts to guess it.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void GameBanner() 
//Precondition: Program is compiled successfully.
//Postcondition: Prints a welcome message and instructions to the screen.

bool NumberGame()
//Precondition: Program is compiled succesfully
//Postcondition: Function determines if the user guesses the number in the given amount of guesses. 



    int main(void)
{
        GameBanner();
    srand(time(NULL)); // to get a new number each time 

    NumberGame();

    // exit program 
    std::cout << "\n\ Enter Anything to Exit.";
    std::cin.ignore();
    return 0;
}


void GameBanner();
{

    std::cout << "Instructions: \n";
    std::cout << "The computer has generated a random number between 1 and 100\n";
    std::cout << "You have twenty guesses to correctly guess what the secret number is.\n";
 
}

bool NumberGame();
{
    while (true)
    {

        int numberGuess = rand() % 99 + 2;
        // system number stored here 
        int guessVal; // used guess value stored here 
        int tries1 = 0; // number of tries stored here 
        char FinalAnswer; // used answer to question stored here 



        while (true) {
            // GET USER NUMBERGUESS LOOP.


            cout << "Enter a Number Between 1 and 100 (" << 20 - tries1 << " tries left): ";
            cin >> guessVal;
            cin.ignore();

            // checks to make sure there are tires left 
            if (tries1 >= 19) {
                break;
            }

            // checks the number 
            if (guessVal > numberGuess)
            {
                srand((unsigned)time(0));
                int result = 1 + (rand() % 10);
                switch (result)
                {
                case 1:
                    cout << "too high! try again\n\n";
                    break;
                case 2:
                    cout << "try a lower number\n\n";
                    break;
                case 3:
                    cout << "lower\n\n";
                    break;
                case 4:
                    cout << "too high\n\n";
                    break;
                case 5:
                    cout << "try again! you guessed too high\n\n";
                    break;
                case 6:
                    cout << "you guessed too high\n\n";
                    break;
                case 7:
                    cout << "lower your guess\n\n";
                    break;
                case 8:
                    cout << "the number you guessed is too high! try again\n\n";
                    break;
                case 9:
                    cout << "guess is too high\n\n";
                    break;
                case 10:
                    cout << "not quite, try a lower number instead!\n\n";
                    break;
                default: 
                    cout << "error";
               


                }

            }
            else if (guessVal < numberGuess) {
                srand((unsigned)time(0));
                int result = 1 + (rand() % 10);
                switch (result)
                {
                case 1:
                    cout << "too low! try again\n\n";
                    continue;
                case 2:
                    cout << "try a higher number\n\n";
                    continue;
                case 3:
                    cout << "higher\n\n";
                    continue;
                case 4:
                    cout << "too low\n\n";
                    continue;
                case 5:
                    cout << "try again! you guessed too low\n\n";
                    continue;
                case 6:
                    cout << "you guessed too low\n\n";
                    continue;
                case 7:
                    cout << "raise your guess\n\n";
                    continue;
                case 8:
                    cout << "the number you guessed is too low! try again\n\n";
                    continue;
                case 9:
                    cout << "guess is too low\n\n";
                    continue;
                case 10:
                    cout << "not quite, try a  number instead!\n\n";
                    continue;

                }

            // out of tries 
            if (tries1 >= 19) {
                std::cout << "You Ran Out of Tries!\n\n";
            }
            else {
                // if user guesses correct number 
                std::cout << "CONGRATULATIONS!! " << std::endl;
                std::cout << "You Got the Right Number in " << tries1 << " Tries!\n";
            }

            while (true)
            {
                // LOOP TO ASK USER IS HE/SHE WOULD LIKE TO PLAY AGAIN.

                std::cout << "Would You Like to Play Again (Y/N)? ";
                std::cin >> FinalAnswer;
                std::cin.ignore();

                // check for the right input 
                if (FinalAnswer == 'n' || FinalAnswer == 'N' || FinalAnswer == 'y' ||
                    FinalAnswer == 'Y') {
                    break;
                }
                else {
                    std::cout << "Please Enter \'Y\' OR \'N\'...\n";
                }
            }

            // CHECK USER'S INPUT AND RUN AGAIN OR EXIT;
            if (FinalAnswer == 'n' || FinalAnswer == 'N') {
                std::cout << "THANK YOU FOR PLAYING!";
                break;
            }
            else {
                std::cout << "\n\n\n";
            }
        }
    }
}
