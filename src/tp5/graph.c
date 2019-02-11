#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

/*Constructor of Summit structure*/
Summit *summit(void) {
	Summit *s = (Summit *) malloc(sizeof(Summit));
	s->summit = (int *) malloc(s->n * sizeof(int));
	return s;
}

/*Constructor of Arcs structure*/
Arcs *arcs(void) {
	Arcs *a = (Arcs *) malloc(sizeof(Arcs));
	a->arc = (int *) malloc(a->p * sizeof(Arcs));
}

/*Constructor of Graph structure*/
Graph *graph(void) {
	Graph *g = (Graph *) malloc(sizeof(Graph));
	return g;
}
