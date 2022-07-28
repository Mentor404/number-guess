//
// Created by mentor on 27/07/22.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    time_t t;
    srand((unsigned) time(&t));
    int i, difficulty = 0;
    int randomE = rand() % 20;
    int randomM = rand() % 100;
    int randomH = rand() % 500;

    printf("%d\n", randomE);
    printf("%d\n", randomM);
    printf("%d\n", randomH);

    printf("Choose the difficulty: \n");
    printf("1 - Easy(1-20)\n2 - Medium(1-100)\n3 - Hard(1-500)\n");
    scanf("%d", &difficulty);
    if(difficulty == 1){
        printf("The difficulty was defined as Easy (1-20)\n");
    } else if(difficulty == 2){
        printf("The difficulty was defined as Medium (1-100)\n");
    } else{
        printf("The difficulty was defined as Hard (1-1000)\n");
    }
    printf("Try to guess, you have 10 tries\n");
    for(i = 0; i != 10; i++){
        int guess[100];
        scanf("%d", &guess[i]);
        if(difficulty == 1){
            if(guess[i] == randomE){
                printf("You win!\nThe number was: %d", randomE);
                break;
            } else if(guess[i] == guess[i-1]){
                printf("You already tried this number\n");
                i--;
            } else if(guess[i] > 20){
                printf("The number is less than 20\n");
                i--;
            } else if(guess[i] < 1){
                printf("The number is greater than 1\n");
                i--;
            } else if(guess[i] > randomE){
                printf("Your guess is too high\nYou have %d tries left\n", 9-i);
            } else if(guess[i] < randomE){
                printf("Your guess is too low\nYou have %d tries left\n", 9-i);
            } else{
                if(i+1 == 10){
                    printf("You lose!\nThe number was: %d", randomE);
                } else {
                    printf("Try again, you have %d tries left\n", 9-i);
                }
            }
        } else if(difficulty == 2){
            if(guess[i] == randomM){
                printf("You win!\nThe number was: %d", randomM);
                break;
            } else if(guess[i] > 20){
                printf("The number is less than 100\n");
                i--;
            } else if(guess[i] < 1){
                printf("The number is greater than 1\n");
                i--;
            } else{
                if(i-1 == 0){
                    printf("You lose!\nThe number was: %d", randomE);
                } else {
                    printf("Try again, you have %d tries left\n", 9-i);
                }
            }
        } else{
            if(guess[i] == randomH){
                printf("You win!\nThe number was: %d", randomH);
                break;
            } else if(guess[i] > 20){
                printf("The number is less than 500\n");
                i--;
            } else if(guess[i] < 1){
                printf("The number is greater than 1\n");
                i--;
            } else{
                if(i-1 == 0){
                    printf("You lose!\nThe number was: %d", randomE);
                } else {
                    printf("Try again, you have %d tries left\n", 9-i);
                }
            }
        }
    }
    return 0;
}