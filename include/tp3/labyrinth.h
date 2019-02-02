#ifndef _LABYRINTH_H_
#define _LABYRINTH_H_

/*Create the labyrinth structure*/
struct labyrinth{
	int n;
	int p;
	int **t;
}*l;

/*Make the dynamic allocation on the precedent structure*/
void handle_labyrinth();

/*Init the labyrinth and put the values within*/
void init_labyrinth();

#endif 
