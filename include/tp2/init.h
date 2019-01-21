#ifndef _INIT_H_
#define _INIT_H_

#include "struct.h"

/*Fill the array with the 32 cards*/
void init_game(Card game[]);

/*Generate a random integer between 0 and 31*/
int random_integer();

/*Permute 2 cards*/
void permute(Card *card1, Card *card2);

/*Mix the cards*/
void mix(Card game[]);

/*Distribute the cards to both players*/
void distribute(Card game[], Card game1[], Card game2[], int *N);

#endif

