//
// Created by mentor on 28/07/22.
//
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int easy(int i, int randomE) {
    int guess;
    printf("%d\n", randomE);
    printf("chose the number: \n");
    scanf("%d", &guess);
    for(i = 10; i!=0; i--){
        if(guess == randomE){
            printf("you win\nthe number are %d", randomE);
            break;
        } else if(guess > 20){
            printf("the number is less than 20\n");
            i += 1;
        } else if(guess < 1){
            printf("the number is greater than 1\n");
            i += 1;
        } else{
            printf("try again, you have %d tries left\n", i-1);
        }
    }
    return guess;
}

int main(){
    setlocale(LC_ALL, "");
    time_t t;
    srand((unsigned) time(&t));
    int i, difficultyEasy, difficulty = 0;
    int randomE = rand() % 20;

    difficultyEasy = easy(i, randomE);

    return 0;
}