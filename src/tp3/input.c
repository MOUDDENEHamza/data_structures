#include <stdio.h>
#include <string.h>

#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define BLUE "\x1B[34m"
#define RESET "\x1B[0m"

/*Give the user the choose of labyrinth*/
int choice(int *accept, char status[]){
	
	printf("\n\nIf you want to choose this labyrinth input "GREEN"\"yes\""RESET" otherwise input "RED"\"no\""RESET".\n");
	while(1) {
		printf("\nYou choose : ");
        	scanf("%s", status);
		if (strcmp(status, "yes") == 0){
			*accept = 1;
			return *accept;
		}	
		if (strcmp(status, "no") == 0){
                	return *accept;
		}
		printf("\n"RED"ERROR :"RESET" your input is not correct.\n");
		continue;
	}
}
