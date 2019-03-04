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
Arc arc(void);

/*
 * Constructor of Graph structure
 */
Graph initializeGraph(void);

/*
 * Add arc a to graph
 */
void add_arc(Arc a, Graph g);

/*
 * Exist summit in the graph
 */
int exist_summit(Summit s, Graph g);

#endif 
