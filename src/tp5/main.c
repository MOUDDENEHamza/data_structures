#include <stdio.h>
#include "displayShell.h"
#include "graph.h"

/*
 * Main function
 */
int main(int argc, char *argv[]) {
	/*Initialize varibles*/
	Graph g;
	int n = 5;//Number of summits in the graph.

	/*Start program*/
	init_bar();//Display the init bar.
	initializeGraph();//Allows to initialize summits to the graph.
	end_bar();//Display the end bar.

	return 0;
}
