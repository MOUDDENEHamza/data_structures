#ifndef _DISPLAYSHELL_H_
#define _DISPLAYSHELL_H_

#include "labyrinth.h"

/*Display the init bar*/
void init_bar(void);

/*Display the labyrinth*/
void display_labyrinth(int *n, int *p, int **t);

/*Separate evry step of the program*/
void separator(void);


/*Display the end bar*/
void end_bar(void);

#endif
