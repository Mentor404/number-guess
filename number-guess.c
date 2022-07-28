//
// Created by mentor on 27/07/22.
//
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    srand((unsigned) time(&t));
    int difficulty = 0;
    int randomE = rand() % 20;
    int randomM = rand() % 100;
    int randomH = rand() % 1000;
    int i;

    printf("%d\n", randomE);
    printf("%d\n", randomM);
    printf("%d\n", randomH);

    printf("chose the difficulty: \n");
    printf("1 - easy(1-20)\n2 - medium(1-100)\n3 - hard(1-1000)\n");
    scanf("%d", &difficulty);
    if(difficulty == 1){
        printf("the difficult are set at easy (1-20)\n");
    } else if(difficulty == 2){
        printf("the difficult are set at medium (1-100)\n");
    } else{
        printf("the difficult are set at hard (1-1000)\n");
    }
    printf("try guess the number, you have 10 tries\n");
    for(i = 10; i != 0; i--){
        int guess;
        scanf("%d", &guess);
        if(difficulty == 1){
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
        } else if(difficulty == 2){
            if(guess == randomM){
                printf("you win\nthe number are %d", randomM);
                break;
            } else{
                printf("try again, you have %d tries left\n", i-1);
            }
        } else{
            if(guess == randomH){
                printf("you win\nthe number are %d", randomH);
                break;
            } else{
                printf("try again, you have %d tries left\n", i-1);
            }
        }
    }
    return 0;
}