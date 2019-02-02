#ifndef _INIT_H_
#define _INIT_H_

#include "struct.h"

/*Fill the array with the 32 cards*/
void init_game(card game[]);

/*Generate a random integer between 0 and 31*/
int random_integer();

/*Permute 2 cards*/
void permute(card *card1, card *card2);

/*Mix the cards*/
void mix(card game[]);

/*Distribute the cards to both players*/
void distribute(card game[], card game1[], card game2[], int *N);

#endif

