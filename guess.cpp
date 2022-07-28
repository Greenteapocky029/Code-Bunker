//Creator: Deven greenlee
//date modified: 7/28/22 
//Purpose: This code allows user to guess the secret number with limited number of guesses 
#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int secretnum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while(secretnum != guess && outOfGuesses == false){
        if(guessCount < guessLimit)
        {
            cout << "enter guess: ";
            cin >> guess;
            guessCount++;
        }
        else
        {

            outOfGuesses = true;
        }

    }
    if(outOfGuesses)
    {

        cout << "YOU LOSE!";
    }
    else
    {
       cout << "YOU WIN!";
    }
    return 0;
}
