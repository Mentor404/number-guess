//
// Created by mentor on 27/07/22.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    time_t t;
    srand((unsigned) time(&t));
    int i, difficulty = 0;
    int randomE = rand() % 20;
    int randomM = rand() % 100;
    int randomH = rand() % 500;

    printf("Choose the difficulty: \n");
    printf("1 - Easy(0-20)\n2 - Medium(0-100)\n3 - Hard(0-500)\n");
    scanf("%d", &difficulty);
    if (difficulty == 1) {
        printf("The difficulty was defined as Easy (0-20)\n");
    } else if (difficulty == 2) {
        printf("The difficulty was defined as Medium (0-100)\n");
    } else {
        printf("The difficulty was defined as Hard (0-500)\n");
    }
    printf("Try to guess, you have 10 tries\n");
    for (i = 0; i != 10; i++) {
        int guess[100];
        int same;
        scanf("%d", &guess[i]);
        if (difficulty == 1) {
            for (int j = 0; j <= i; j++) {
                if (guess[i] == guess[j - 1]) {
                    same = guess[i];
                    break;
                }
            }
            if (guess[i] == randomE) {
                printf("You win!\nThe number was: %d", randomE);
                break;
            } else if (guess[i] == same) {
                printf("You already tried this number\n");
                i--;
            } else if (guess[i] > 20) {
                printf("The number is less than 20\n");
                i--;
            } else if (guess[i] < 0) {
                printf("The number is greater than 0\n");
                i--;
            } else if (1 + i == 10) {
                printf("You lose!\nThe number was: %d", randomE);
            } else {
                if (guess[i] > randomE) {
                    printf("Your guess is too high(%d tries left)\n", 9 - i);
                } else {
                    printf("Your guess is too low(%d tries left)\n", 9 - i);
                }
            }
        } else if (difficulty == 2) {
            for (int j = 0; j <= i; j++) {
                if (guess[i] == guess[j - 1]) {
                    same = guess[i];
                    break;
                }
            }
            if (guess[i] == randomM) {
                printf("You win!\nThe number was: %d", randomM);
                break;
            } else if (guess[i] == same) {
                printf("You already tried this number\n");
                i--;
            } else if (guess[i] > 100) {
                printf("The number is less than 100\n");
                i--;
            } else if (guess[i] < 0) {
                printf("The number is greater than 0\n");
                i--;
            } else if (1 + i == 10) {
                printf("You lose!\nThe number was: %d", randomM);
            } else {
                if (guess[i] > randomM) {
                    printf("Your guess is too high(%d tries left)\n", 9 - i);
                } else {
                    printf("Your guess is too low(%d tries left)\n", 9 - i);
                }
            }
        } else {
            for (int j = 0; j <= i; j++) {
                if (guess[i] == guess[j - 1]) {
                    same = guess[i];
                    break;
                }
            }
            if (guess[i] == randomH) {
                printf("You win!\nThe number was: %d", randomH);
                break;
            } else if (guess[i] == same) {
                printf("You already tried this number\n");
                i--;
            } else if (guess[i] > 500) {
                printf("The number is less than 500\n");
                i--;
            } else if (guess[i] < 0) {
                printf("The number is greater than 0\n");
                i--;
            } else if (1 + i == 10) {
                printf("You lose!\nThe number was: %d", randomH);
            } else {
                if (guess[i] > randomH) {
                    printf("Your guess is too high(%d tries left)\n", 9 - i);
                } else {
                    printf("Your guess is too low(%d tries left)\n", 9 - i);
                }
            }
        }
    }
    return 0;
}