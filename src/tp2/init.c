#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"

#define SIZE_GAME 32

/*Fill the array with the 32 cards*/
void init_game(Card game[]){
        int i;
        for (i = 0; i < SIZE_GAME; i++){
                game[i].value = 7 + (i % 8);
                if (i >= 0 && i < 8){
                        strcpy(game[i].color, "heart");
                }
                if (i >= 8 && i < 16){
                        strcpy(game[i].color, "spade");
                }
                if (i >= 16 && i < 24){
                        strcpy(game[i].color, "diamond");
                }
                if (i >= 24 && i < 32){
                        strcpy(game[i].color, "club");
                }
        }
        return;
}

/*Generate a random integer between 0 and 31*/
int random_integer(){
        return rand() % 32;
}

/*Permute 2 cards*/
void permute(Card *card1, Card *card2){
        Card temp = *card1;
        *card1 = *card2;
        *card2 = temp;
        return;
}

/*Mix the cards*/
void mix(Card game[]){
        int i;
        for (i = 0; i < SIZE_GAME / 2; i++){
                permute(&game[random_integer()], &game[random_integer()]);//Permute two random cards.
        }
        return;
}

/*Distribute the cards to both players*/
void distribute(Card game[], Card game1[], Card game2[], int *N){
        int i;
        for (i = 0; i < *N / 2; i ++){
                game1[i] = game[i];
		game[i].value = 0;
	}
        for (i = *N / 2; i < SIZE_GAME; i++){
                game2[i - (*N / 2)] = game[i];
		game[i].value = 0;
        }
        return;
}
