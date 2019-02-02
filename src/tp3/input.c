#include <stdio.h>
#include <string.h>

/*Give the user the choose of labyrinth*/
int choice(int *accept, char status[]){
	
	printf("\nIf you want to choose this labyrinth input \"yes\" otherwise input \"no\".\n");
	printf("Your choice : ");
	scanf("%s", status);
	if (strcmp(status, "yes") == 0){
		*accept = 1;
		return *accept;
	}	

	return *accept;
}
