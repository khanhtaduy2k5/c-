#include <iostream>
#include <cstdlib>

using namespace std;

int generateRandomNumber(){
    return 28;
}


int getPlayerGuess(){
    int guess;
    cout << endl << "Enter your guess (1..100): ";
    cin >> guess;
    return guess;
}


void printAnswer(int guess, int secretNumber){
    if(guess > secretNumber){
        cout << "Your number is too big.";
    }
    else if (guess < secretNumber){
        cout << "Your number is too small.";
    }
    else {
        cout << "Congratulation! You win.";
    }
}

int main(){
    int secretNumber = generateRandomNumber();
    int guess;

    do{
        guess = getPlayerGuess();
        printAnswer(guess, secretNumber);
    }
    while (guess != secretNumber);
    return 0;
}

