#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/*Make the dynamic allocation on the precedent structure*/
void handle_stack(void) {
	st = malloc(sizeof(struct stack));
	st->size = 10;
	st->s = (int *) malloc(st->size * sizeof(int));
	return;
}

/*Check if the stack is empty*/
int empty(void) {
	return (st->size == 0);
}

/*Return the size of the size*/
int size(void) {
	return st->size;
}

/*Get the item in the summit of stack*/
int get(void) {
	return st->s[st->size - 1];	
}

/*Add value to sumiit of my stack*/
void add(int value) {
	st->size++;
	st->s[st->size - 1];
	return;
}

/*Remove item from the summit of my stack*/
void removeStack(void) {
	st->size--;
	return;
}
