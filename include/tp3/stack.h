#ifndef _STACK_H_
#define _STACK_H_

/*Create the structure of my stack*/
struct stack{
	int size;
	int *s;
} *st;

/*Make the dynamic allocation on the precedent structure*/
void handle_stack();

#endif
