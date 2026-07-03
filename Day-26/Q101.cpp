// Write a program to Create number guessing game.

#include<iostream>
using namespace std;
int main(){
    int secret=25,guess;
    cout<<"guess the number between 1 and 100\n";
    while(1){
        cout<<"enter your guess : ";
        cin>>guess;
        if(guess==secret){
            cout<<"congratulations! you guessed the correct number";
            break;
        }
        else if(guess<secret){
            cout<<"guess a bigger number\n";
        }
        else{
            cout<<"guess a smaller number\n";
        }
    }
    return 0;
}