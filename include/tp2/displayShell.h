#ifndef _DISPLAYSHELL_H_
#define _DISPLAYSHELL_H_

#include "struct.h"

/*display : this function initialize and display the init bar*/
void launch_program();

/*Display card (Value, color)*/
void display_card(Card X);

/*Display N cards*/
void display(Card game[], Card game1[], Card game2[], int *N ,int *N1 ,int *N2);

#endif
