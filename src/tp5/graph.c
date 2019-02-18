#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

/*Constructor of Summit structure*/
Summit *summit(void) {
	Summit *s = (Summit *) malloc(sizeof(Summit));
	return s;
}

/*Constructor of Arcs structure*/
Arcs *arcs(void) {
	Arcs *a = (Arcs *) malloc(sizeof(Arcs));
	return a;
}

/*Constructor of Graph structure*/
Graph *graph(void) {
	Graph *g = (Graph *) malloc(sizeof(Graph));
	return g;
}

/*Allows to add summits to the graph*/
void initialize_Graph(Graph *g, int *n) {
	int i;
	for (i = 0; i < N; i++)
		g->head[i] = NULL;
}

/*Add arc a to graph*/
void add_arc(Arcs *a, Graph *g) {
	int src;
	int dest;
	src = a->src;
	dest = a->dest;
}

/*Exist summit in the graph*/
bool exist_summit(Summit *s, graph *g) {
	if (
	return false;
}
