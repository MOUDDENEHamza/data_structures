#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/*Make the dynamic allocation on the precedent structure*/
void handle_stack() {
	
	st = malloc(sizeof(struct stack));
	st->size = 10;
	st->s = (int *) malloc(st->size * sizeof(int));
	
	return;
}
