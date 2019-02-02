#ifndef _DISPLAYSHELL_H_
#define _DISPLAYSHELL_H_

#include "struct.h"

/*display : this function initialize and display the init bar*/
void launch_program();

/*Display card (Value, color)*/
void display_card(card X);

/*Check if a player win then display the winner and number of turn played*/
int win(int *N1, int *N2, int *turn);

/*Display N cards*/
void display(card game[], card game1[], card game2[], int *N ,int *N1 ,int *N2);

/*display : this function initialize and display the init bar*/
void end_bar();

#endif
