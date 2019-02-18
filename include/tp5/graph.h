#ifndef _GRAPH_H_
#define _GRAPH_H_

#define N 5

/*This structure is about the summits of graph*/
typedef struct {
	int dest;
	struct Summit *next;
} Summit;

/*This structure is about the arcs of the summit*/
typedef struct {
        int src;
        int dest;
} Arcs;

/*This structure is about the graph containing arcs and summits*/
typedef struct {
	Summit* head[N];
} Graph;

/*Constructor of Summit structure*/
Summit *summit(void);

/*Constructor of Arcs structure*/
Arcs *arcs(void);

/*Constructor of Graph structure*/
Graph *graph(void);

/*Allows to add summits to the graph*/
void initialize_Graph(Graph *g, int *n);

/*Add arc a to graph*/
void add_arc(Arcs *a, Graph *g);

/*Exist summit in the graph*/
bool exist_summit(Summit *s, graph *g);

#endif 
