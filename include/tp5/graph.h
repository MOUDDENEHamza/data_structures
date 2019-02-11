#ifndef _GRAPH_H_
#define _GRAPH_H_

/*This structure is about the summits of graph*/
typedef struct {
	int n;
	int *summit;
} Summit;

/*This structure is about the arcs of the summit*/
typedef struct {
        int p;
        int *arc;
} Arcs;

/*This structure is about the graph containing arcs and summits*/
typedef struct {
	Summit s;
	Arcs a;
} Graph;

/*Constructor of Summit structure*/
Summit *summit(void);

/*Constructor of Arcs structure*/
Arcs *arcs(void);

/*Constructor of Graph structure*/
Graph *graph(void);

#endif 
