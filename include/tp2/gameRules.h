#ifndef _GAMERULES_H_
#define _GAMERULES_H_

#include "struct.h"

/*Update the game*/
void update(card game1[], card game2[], int *N1, int *N2, card a, card b);

/*Handle the result of a battle (1 shot)*/
void play(card game1[], card game2[], int *N1, int *N2);

#endif
