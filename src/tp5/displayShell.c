#include <stdio.h>
#include "displayShell.h"

#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define BLUE "\x1B[34m"
#define RESET "\x1B[0m"

/*Display the init bar*/
void init_bar(void) {
	printf("\n******************************************************************************\n");
	printf("\n\t\t\t\t"GREEN"GRAPH"RESET"\t\t\t\n");
	printf("\n******************************************************************************\n");
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
		printf(RED"ERROR :"RESET"There are any arcs in the graph !\n");
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

/*Display the end bar*/
void end_bar(void) {
        printf("\n\n\t\t\t\t"GREEN"THE END"RESET"\t\t\t\n");
        printf("\n******************************************************************************\n\n");
}
