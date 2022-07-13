//
//  main.cpp
//  RandomNumberGuesser
//
//  Created by Thilak Raj M on 13/07/22.
//

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void PlayGame(){
    int secretNo = rand()%101;
    int numberOfGuessesLeft = ceil(log2(secretNo));
    int userGuess;
    
    do{
         cout<<"let's try your luck in guessing a number in the range [0,100]: ";
         cin>>userGuess;
         numberOfGuessesLeft--;
         if(secretNo == userGuess){
             cout<<"Wow, you're in luck. You guessed "<<secretNo<<" correctly!"<<endl;
             return;
         }
         if(userGuess > secretNo){
             cout<<"Phew, try to guess lower!\n";
         }else{
             cout<<"Try guessing higher!\n";
         }
    }while(numberOfGuessesLeft >0);
    cout<<"Game Over......., The secret number was "<<secretNo<<".\n";
};

bool IsPlayGame(){
    cout<<"Want to continue playing? (y/n)";
    char a;
    cin>>a;
    return a=='y' || a == 'Y';
};

int main() {
    
    do{
        PlayGame();
    }while(IsPlayGame());
    
    return 0;
}
