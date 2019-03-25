#include <stdio.h>
#include "displayShell.h"
#include "graph.h"

/*
 * Main function
 */
int main(int argc, char *argv[]) {
	/*Initialize varibles*/
	Graph g;
	Arc a;
	Summit s;
	int n = 5;//Number of summits in the graph.
	int c = 1;
	int b = 2;
	/*Start program*/
	init_bar();//Display the init bar.
	g = graph();//Allows to initialize summits to the graph.
	a = arc(&c, &b);//Create arc a between summit 1 and 2.
	add_arc(a, g);//Add arc to the graph.
	a = arc(&b, &c);//Create arc between summit 2 and 1.
	add_arc(a, g);//Add arc to the graph.
	a = arc(&b, &b);//Create arc between summit 2 and 1.
	add_arc(a, g);//Add arc to the graph.
	display_arc(a);//Display arc a.
	display_all_arc(g);//Display all arc of the graph.
	end_bar();//Display the end bar.

	return 0;
}
