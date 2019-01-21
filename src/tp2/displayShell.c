#include <stdio.h>
#include "displayShell.h"

#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define BLUE "\x1B[34m"
#define RESET "\x1B[0m"

/*display : this function initialize and display the init bar*/
void launch_program() {
	printf("\n******************************************************************************\n");
	printf("\n\t\t\t"GREEN"BATTLE GAME"RESET"\t\t\t\n");
	printf("\n******************************************************************************\n");
	return;
}
