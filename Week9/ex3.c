#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Design and implement the card game Bài Cào for two players. This is a common game 
played during Tet in Vietnam. 
*/

enum cardName {Ace = 1, Jack = 11, Queen = 12, King = 13};
enum cardType {Spades = 1, Clubs = 2, Diamonds = 3, Hearts = 4};
typedef struct {
    int type;
    int number;
} card;

typedef struct {
    card c1;
    card c2;
    card c3;
} player;

void dealCards (player *p);
void printCards(player p, int queue);
int getWinner(player p1, player p2);




int main() {
    // int number = rand() % 13  + 1;
    // int type = rand() % 4 + 1;

    player p1;
    player p2;

    srand(time(0));
    dealCards(&p1);
    dealCards(&p2);

    printCards(p1, 1);
    printCards(p2, 2);

    printf("The winner is: Player %d\n", getWinner(p1,p2));

    return 0;
}

void dealCards (player *p) {
    for (int i = 0; i < 3; i++) {
    //Assigning cards to player 
        p->c1.number = rand() % 13  + 1;
        p->c2.number = rand() % 13  + 1;
        p->c3.number = rand() % 13  + 1;

        p->c1.type   = rand() % 4 + 1;
        p->c2.type   = rand() % 4 + 1;
        p->c3.type   = rand() % 4 + 1;
    }
    return;
}

void printCards(player p, int queue) {
    //First Card
    if (p.c1.type == 1) {
        if (p.c1.number == 1) {
            printf("Player %d 1st card is: Ace Spades\n", queue);
        }
        else if (p.c1.number == 11) {
            printf("Player %d 1st card is: Jack Spades\n", queue);
        }
        else if (p.c1.number == 12) {
            printf("Player %d 1st card is: Queen Spades\n", queue);
        }
        else if (p.c1.number == 13) {
            printf("Player %d 1st card is: King Spades\n", queue);
        }
        else {
            printf("Player %d 1st card is: %d Spades\n", queue, p.c1.number);
        }
    }
    else if (p.c1.type == 2) {
        if (p.c1.number == 1) {
            printf("Player %d 1st card is: Ace Clubs\n", queue);
        }
        else if (p.c1.number == 11) {
            printf("Player %d 1st card is: Jack Clubs\n", queue);
        }
        else if (p.c1.number == 12) {
            printf("Player %d 1st card is: Queen Clubs\n", queue);
        }
        else if (p.c1.number == 13) {
            printf("Player %d 1st card is: King Clubs\n", queue);
        }
        else {
            printf("Player %d 1st card is: %d Clubs\n", queue, p.c1.number);
        }
    }
    else if (p.c1.type == 3) {
        if (p.c1.number == 1) {
            printf("Player %d 1st card is: Ace Diamonds\n", queue);
        }
        else if (p.c1.number == 11) {
            printf("Player %d 1st card is: Jack Diamonds\n", queue);
        }
        else if (p.c1.number == 12) {
            printf("Player %d 1st card is: Queen Diamonds\n", queue);
        }
        else if (p.c1.number == 13) {
            printf("Player %d 1st card is: King Diamonds\n", queue);
        }
        else {
            printf("Player %d 1st card is: %d Diamonds\n", queue, p.c1.number);
        }
    }    
    else if (p.c1.type == 4) {
        if (p.c1.number == 1) {
            printf("Player %d 1st card is: Ace Hearts\n", queue);
        }
        else if (p.c1.number == 11) {
            printf("Player %d 1st card is: Jack Hearts\n", queue);
        }
        else if (p.c1.number == 12) {
            printf("Player %d 1st card is: Queen Hearts\n", queue);
        }
        else if (p.c1.number == 13) {
            printf("Player %d 1st card is: King Hearts\n", queue);
        }
        else {
            printf("Player %d 1st card is: %d Hearts\n", queue, p.c1.number);
        }
    }    
    //Second Card
    if (p.c2.type == 1) {
        if (p.c2.number == 1) {
            printf("Player %d 1st card is: Ace Spades\n", queue);
        }
        else if (p.c2.number == 11) {
            printf("Player %d 1st card is: Jack Spades\n", queue);
        }
        else if (p.c2.number == 12) {
            printf("Player %d 1st card is: Queen Spades\n", queue);
        }
        else if (p.c2.number == 13) {
            printf("Player %d 1st card is: King Spades\n", queue);
        }
        else {
            printf("Player %d 1st card is: %d Spades\n", queue, p.c2.number);
        }
    }
    else if (p.c2.type == 2) {
        if (p.c2.number == 1) {
            printf("Player %d 1st card is: Ace Clubs\n", queue);
        }
        else if (p.c2.number == 11) {
            printf("Player %d 1st card is: Jack Clubs\n", queue);
        }
        else if (p.c2.number == 12) {
            printf("Player %d 1st card is: Queen Clubs\n", queue);
        }
        else if (p.c2.number == 13) {
            printf("Player %d 1st card is: King Clubs\n", queue);
        }
        else {
            printf("Player %d 1st card is: %d Clubs\n", queue, p.c2.number);
        }
    }
    else if (p.c2.type == 3) {
        if (p.c2.number == 1) {
            printf("Player %d 1st card is: Ace Diamonds\n", queue);
        }
        else if (p.c2.number == 11) {
            printf("Player %d 1st card is: Jack Diamonds\n", queue);
        }
        else if (p.c2.number == 12) {
            printf("Player %d 1st card is: Queen Diamonds\n", queue);
        }
        else if (p.c2.number == 13) {
            printf("Player %d 1st card is: King Diamonds\n", queue);
        }
        else {
            printf("Player %d 1st card is: %d Diamonds\n", queue, p.c2.number);
        }
    }    
    else if (p.c2.type == 4) {
        if (p.c2.number == 1) {
            printf("Player %d 1st card is: Ace Hearts\n", queue);
        }
        else if (p.c2.number == 11) {
            printf("Player %d 1st card is: Jack Hearts\n", queue);
        }
        else if (p.c2.number == 12) {
            printf("Player %d 1st card is: Queen Hearts\n", queue);
        }
        else if (p.c2.number == 13) {
            printf("Player %d 1st card is: King Hearts\n", queue);
        }
        else {
            printf("Player %d 1st card is: %d Hearts\n", queue, p.c2.number);
        }
    }    
    //Third Card
    if (p.c3.type == 1) {
        if (p.c3.number == 1) {
            printf("Player %d 1st card is: Ace Spades\n", queue);
        }
        else if (p.c3.number == 11) {
            printf("Player %d 1st card is: Jack Spades\n", queue);
        }
        else if (p.c3.number == 12) {
            printf("Player %d 1st card is: Queen Spades\n", queue);
        }
        else if (p.c3.number == 13) {
            printf("Player %d 1st card is: King Spades\n", queue);
        }
        else {
            printf("Player %d 1st card is: %d Spades\n", queue, p.c3.number);
        }
    }
    else if (p.c3.type == 2) {
        if (p.c3.number == 1) {
            printf("Player %d 1st card is: Ace Clubs\n", queue);
        }
        else if (p.c3.number == 11) {
            printf("Player %d 1st card is: Jack Clubs\n", queue);
        }
        else if (p.c3.number == 12) {
            printf("Player %d 1st card is: Queen Clubs\n", queue);
        }
        else if (p.c3.number == 13) {
            printf("Player %d 1st card is: King Clubs\n", queue);
        }
        else {
            printf("Player %d 1st card is: %d Clubs\n", queue, p.c3.number);
        }
    }
    else if (p.c3.type == 3) {
        if (p.c3.number == 1) {
            printf("Player %d 1st card is: Ace Diamonds\n", queue);
        }
        else if (p.c3.number == 11) {
            printf("Player %d 1st card is: Jack Diamonds\n", queue);
        }
        else if (p.c3.number == 12) {
            printf("Player %d 1st card is: Queen Diamonds\n", queue);
        }
        else if (p.c3.number == 13) {
            printf("Player %d 1st card is: King Diamonds\n", queue);
        }
        else {
            printf("Player %d 1st card is: %d Diamonds\n", queue, p.c3.number);
        }
    }    
    else if (p.c3.type == 4) {
        if (p.c3.number == 1) {
            printf("Player %d 1st card is: Ace Hearts\n", queue);
        }
        else if (p.c3.number == 11) {
            printf("Player %d 1st card is: Jack Hearts\n", queue);
        }
        else if (p.c3.number == 12) {
            printf("Player %d 1st card is: Queen Hearts\n", queue);
        }
        else if (p.c3.number == 13) {
            printf("Player %d 1st card is: King Hearts\n", queue);
        }
        else {
            printf("Player %d 1st card is: %d Hearts\n", queue, p.c3.number);
        }
    }    
}

int getWinner(player p1, player p2) {
    //Return 1 if player 1 wins, return 2 if players 2 win;
    int point1 = 0;
    int point2 = 0;
    
    //Check for special case
    if (p1.c1.number == p1.c2.number && p1.c2.number == p1.c3.number) {
        printf("Special Case\n");
        if (p2.c1.number == p2.c2.number && p2.c1.number == p2.c3.number) {
            if (p1.c1.number < p2.c1.number) {
                point1 = p1.c1.number * 3;
                point2 = p2.c1.number * 3;
                printf("Player 1 got: %d points\n", point1);
                printf("Player 2 got: %d points\n", point2);
                return 2;
            }
            else {
                return 1;
            }
        }
        else {
            return 1;
        }
    }


    //Calculate point for player 1
    if (p1.c1.number == 11 || p1.c1.number == 12 || p1.c1.number == 13) {
        point1 += 10;
    }
    else {
        point1 += p1.c1.number;
    }

    if (p1.c2.number == 11 || p1.c2.number == 12 || p1.c2.number == 13) {
        point1 += 10;
    }
    else {
        point1 += p1.c2.number;
    }
       
    if (p1.c3.number == 11 || p1.c3.number == 12 || p1.c3.number == 13) {
        point1 += 10;
    }
    else {
        point1 += p1.c3.number;
    }

    //Calculate for player 2
    if (p2.c1.number == 11 || p2.c1.number == 12 || p2.c1.number == 13) {
        point2 += 10;
    }
    else {
        point2 += p2.c1.number;
    }

    if (p2.c2.number == 11 || p2.c2.number == 12 || p2.c2.number == 13) {
        point2 += 10;
    }
    else {
        point2 += p2.c2.number;
    }
       
    if (p2.c3.number == 11 || p2.c3.number == 12 || p2.c3.number == 13) {
        point2 += 10;
    }
    else {
        point2 += p2.c3.number;
    }

    //Calculate final points

    if (point1 % 10 == 0) {
        point1 = 0; 
    }
    else {
        point1 = point1 % 10;
    }
    if (point2 % 10 == 0) {
        point2 = 0;
    }
    else {
        point2 = point2 % 10;
    }
    if (point1 < point2) {
        printf("Player 1 got: %d points\n", point1);
        printf("Player 2 got: %d points\n", point2);
        return 2;
    }
    else if (point1 > point2) {
        printf("Player 1 got: %d points\n", point1);
        printf("Player 2 got: %d points\n", point2);
        return 1;
    }
    else {
        printf("Player 1 got: %d points\n", point1);
        printf("Player 2 got: %d points\n", point2);
        printf("Draw\n");
        return 0;
    }
}