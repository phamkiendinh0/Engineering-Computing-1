#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

// Develop a Rock-Paper-Scissors game to play against the computer. Assume that 0 is used 
// to represent Rock, 1 to represent Paper, and 2 to represent Scissors.  
// First, the computer selects a random integer among 0, 1, and 2. This value is not known 
// by the user. The user then enters a choice as an integer. The program then determines if 
// the user wins, loses, or draws against the computer. When the user enters -1, the program 
// exits. But if the user enters any value other than 0, 1, 2, and -1 the program prints an error 
// messages then continues to play another round.  
// Note that the rule is Rock wins Scissors, Scissors wins Paper, and Paper wins Rock. 

int main() {
    srand(time(0));
    int input;

    int random = rand() % 3;    
    while (1) {
        printf("Welcome to the ROCK-PAPER-SCISSORS game\n");
        printf("ROCK: 0, PAPER: 1, SCISSORS: 2, EXIT: -1\n");
        printf("Enter an integer for your choice: ");
        scanf("%d", &input);
        if (input == -1) {
            printf("Game Exiting....\n");
            break;
        }
        if (input != -1 && input != 1 && input != 0 && input != 2) {
            printf("Invalid Input, proceed to new round!!\n\n");
            continue;
        }
        else {
            if (random == 0 && input == 0) {
                printf("Computer picked ROCK\n");
                printf("You picked ROCK\n");
                printf("It's a DRAW\n");
            }
            if (random == 0 && input == 1) {
                printf("Computer picked ROCK\n");
                printf("You picked PAPER\n");
                printf("You WON\n");
            }
            if (random == 0 && input == 2) {
                printf("Computer picked ROCK\n");
                printf("You picked SCISSORS\n");
                printf("You LOST\n");
            }




            else if (random == 1 && input == 1) {
                printf("Computer picked PAPER\n");
                printf("You picked PAPER\n");
                printf("It's a DRAW\n");
            }
            else if (random == 1 && input == 0) {
                printf("Computer picked PAPER\n");
                printf("You picked ROCK\n");
                printf("You LOST\n");
            }
            else if (random == 1 && input == 2) {
                printf("Computer picked PAPER\n");
                printf("You picked SCISSORS\n");
                printf("You WON\n");
            }



            else if (random == 2 && input == 2) {
                printf("Computer picked SCISSORS\n");
                printf("You picked SCISSORS\n");
                printf("It's a DRAW\n");
            }
            else if (random == 2 && input == 1) {
                printf("Computer picked SCISSORS\n");
                printf("You picked PAPER\n");
                printf("You LOST\n");
            }
            else if (random == 2 && input == 0) {
                printf("Computer picked SCISSORS\n");
                printf("You picked ROCK\n");
                printf("You WON\n");
            }

            printf("\nNew Round\n");
            continue;
        }

    }

    return 0;
}
