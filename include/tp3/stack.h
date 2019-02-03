#ifndef _STACK_H_
#define _STACK_H_

/*Create the structure of my stack*/
struct stack{
	int size;
	int *s;
} *st;

/*Make the dynamic allocation on the precedent structure*/
void handle_stack(void);

/*Check if the stack is empty*/
int empty(void);

/*Return the size of the size*/
int size(void);

/*Get the item in the summit of stack*/
void get(void);

/*Add value to summit of my stack*/
void add(int *x, int *y, int *a, int *b);

/*Remove item from the summit of my stack*/
void removeStack(void);

/*Get the adjacent boxes*/
void get_adjacent(int *a, int *b, int res[], int *size);

/*Check if the exploration is ending*/
int end_browsing(void);

/*Browse and explore the labyrinth*/
void browse(int *a, int *b, int res[], int *size);

#endif
