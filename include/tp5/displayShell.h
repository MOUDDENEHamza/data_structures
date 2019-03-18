#ifndef _DISPLAYSHELL_H_
#define _DISPLAYSHELL_H_

#include "graph.h"

/*
 * Display the init bar
 */
void init_bar(void);

/*
 * Display arc
 */
void display_arc(Arc a);

/*
 * Display all arcs in the graph
 */
void display_all_arc(Graph g);

/*
 * Display the end bar
 */
void end_bar(void);

#endif
