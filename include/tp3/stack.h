#ifndef _STACK_H_
#define _STACK_H_

/*Create the stack structure*/
struct stack{
	int n;
	int p;
	int **st;
}*s;

/*Make the dynamic allocation on the precedent structure*/
void handle_stack();

/*Init the stack and put the values within*/
void init_stack();

#endif 
