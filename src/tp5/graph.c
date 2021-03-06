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
	int x;
	int y;
	Arc next;
};

/*
 * This structure is about the graph containing arcs and summits
 */
struct graph {
	 Summit list_summits;
	 Arc list_arcs;
};

/**
 * This structure is doubly linked list to search descending
 */
struct queue {//Queue of a doubly linked list
	char value;
	Queue next;//Pointer to next node in DLL queue
	Queue prev;//Pointer to previous node in DDL queue
};

/**
 * Constructor of the queue structure
 */
Queue new_queue(void) {

}

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
Arc arc(int *x, int *y) {
	Arc a = (Arc) malloc(sizeof(Arc));
	a->x = *x;
	a->y = *y;
	a->next = NULL;
	return a;
}

/*
 * Constructor of Graph structure
 */
Graph graph(void) {
	Graph g = (Graph) malloc(sizeof(Graph));
	g->list_summits = NULL;
	g->list_arcs = NULL;
	return g;
}

/*
 * Check if the arc exists in the graph
 */
int exist_arc(Arc a, Graph g){
	int equal = 1;
	Arc a_check;
	if (g->list_arcs == NULL) {
		return 1;
	} else {
		while (a_check->next != NULL && equal == 1) {
			if ((a->x == a_check->x) && (a->y == a_check->y)) {
				equal = 0;
			}
			a_check = a_check->next;
		}
	}
}

/*
 * Remove arc from graph
 */
void remove_arc(Arc a, Graph g) {
	Arc a_check = g->list_arcs;
	if (exist_arc(a, g) == 0){
		
	}
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
		s_check = g->list_summits;
		while (s_check->next != NULL) {
			if (s_check->index == s->index) {
				return 0;
			}
			s_check = s_check->next;
		}
		return 1;
	}
}

/*
 * Display arc
 */
void display_arc(Arc a) {
        printf("___Arc___\n");
        printf("(%d, %d)\n",a->x,a->y);
}

/*
 * Display all arcs in the graph
 */
void display_all_arc(Graph g) {
        if (g->list_arcs == NULL)
                printf("ERROR : There are any arcs in the graph !\n");
        else {
                Arc a = g->list_arcs;
                printf("Arc list in the graph\n");
                while (a != NULL)
                {
                        printf("\tArc (%d,%d)\n",a->x,a->y);
                        a = a->next;
                }
        }
        printf("------------------------\n");
}
