#ifndef _GRAPH_H_
#define _GRAPH_H_

#define N 5

/*
 * This structure is about the summits of graph
 */
typedef struct summit *Summit;

/*
 * This structure is about the arcs of the summit
 */
typedef struct arc *Arc;

/*
 * This structure is about the graph containing arcs and summits
 */
typedef struct graph *Graph;

/*
 * Constructor of Summit structure
 */
Summit summit(void);

/*
 * Constructor of Arcs structure
 */
Arc arc(int *x, int *y);

/*
 * Constructor of Graph structure
 */
Graph initializeGraph(void);

/*
 * Check if the arc exists in the graph
 */
int exist_arc(Arc arc, Graph g);

/*
 * Add arc a to graph
 */
void add_arc(Arc a, Graph g);

/*
 * Remove arc from graph
 */
void remove_arc(Arc a, Graph g);

/*
 * Exist summit in the graph
 */
int exist_summit(Summit s, Graph g);

/*
 * Display arc
 */
void display_arc(Arc a);

/**
 * Display all arcs in the graph
 */
void display_all_arc(Graph g);

#endif 
