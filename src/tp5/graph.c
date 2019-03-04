#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

/*
 * This structure is about the summits of graph
 */
struct summit {
	 int index;
	 char name;
	 Summit next;
};

/*
 * This structure is about the arcs of the summit
 */
struct arc {
	int Ix;
	int Iy;
	Arc next;
};

/*
 * This structure is about the graph containing arcs and summits
 */
struct graph {
	 Summit list_summits;
	 Arc list_arcs;
};

/*
 * Constructor of Summit structure
 */
Summit summit(void) {
	Summit s = (Summit) malloc(sizeof(Summit));
	return s;
}

/*
 * Constructor of Arcs structure
 */
Arc arc(void) {
	Arc a = (Arc) malloc(sizeof(Arc));
	return a;
}

/*
 * Constructor of Graph structure
 */
Graph initializeGraph(void) {
	Graph g = (Graph) malloc(sizeof(Graph));
	g->list_summits = NULL;
	g->list_arcs = NULL;
	return g;
}

/*
 * Add arc a to graph
 */
void add_arc(Arc a, Graph g) {
	Arc a_check;
	if (g->list_arcs == NULL) {
		g->list_arcs = a;
	} else {
		a_check = g->list_arcs;
		while (a_check->next != NULL) {
			a_check = a_check->next;
		}	
		a_check->next = a;
	}
}

/*
 * Exist summit in the graph
 */
int exist_summit(Summit s, Graph g) {
	Summit s_check;
	if (g->list_summits == NULL) {
		return 1;
	} else {
		return 0;
	}
}
