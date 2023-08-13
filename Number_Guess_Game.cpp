#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(NULL));  //to seed the random number generator. This is done to ensure that the random numbers generated are different each time the program is run.
    int randomNumber=rand()%100+1;    //generate two digit no.between 1-100(include 1,100both)
    int guessNumber, attempt=1;
    cout<<"--## NUMBER GUESSING NAME ##--\nGuess any number between 1 and 100: ";
    cin>>guessNumber;
    while(true){
        if(guessNumber>randomNumber)
            cout<<"Sorry you guess higher number\n\nPlease guess the LOWER one: ";
        else if(guessNumber<randomNumber)
            cout<<"Sorry you guess lower number\n\nPlease guess the HIGHER one: ";
        else{
            cout<<"Congratulations! You guessed the "<<randomNumber<<" in "<<attempt<<" attempt\n";
            break;
        }
        cin>>guessNumber;
        attempt++;
    }
    return 0;
}