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
int get(void);

/*Add value to sumiit of my stack*/
void add(int value);

/*Remove item from the summit of my stack*/
void removeStack(void);

#endif
