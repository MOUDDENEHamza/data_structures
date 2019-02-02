#include <stdio.h>
#include "displayShell.h"

#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define BLUE "\x1B[34m"
#define RESET "\x1B[0m"

/*display : this function initialize and display the init bar*/
void launch_program() {
	
	printf("\n******************************************************************************\n");
	printf("\n\t\t\t\t"GREEN"BATTLE GAME"RESET"\t\t\t\n");
	printf("\n******************************************************************************\n");
	
	return;
}

/*Display card (Value, color)*/
void display_card(card X){
        printf("%d, %s", X.value, X.color);
        return;
}

/*Check if a player win then display the winner and number of turn played*/
int win(int *N1, int *N2, int *turn){
        
	if (*N1 == 0){
                printf("\nTurn played : %d\n", *turn);
                printf("The second player win.\n");
                return 1;
        }
        if (*N2 == 0){
                printf("\nTurn played : %d\n", *turn);
                printf("The first player win.\n");
                return 1;
        }
        
	return 0;
}


/*Display N cards*/
void display(card game[], card game1[], card game2[], int *N ,int *N1 ,int *N2){
	int i;
        
	printf("\n GAME \t\t "BLUE"GAME1"RESET" \t\t\t "RED"GAME2"RESET" \n");
	for (i = 0; i < *N; i++){
		if (i > *N1 && i > *N2 && game[i].value == 0) {
                        continue;
                }
		printf("\n");
		if (i >= *N1) {
			printf(" \t\t\t ");
		}
		if (i < *N && game[i].value != 0) {	
			display_card(game[i]);
                }
		if (i < *N1 && game1[i].value != 0) {
			printf(" \t\t ");
			display_card(game1[i]);	
		}
		if (i < *N2 && game2[i].value != 0) {
			printf(" \t\t ");
			display_card(game2[i]);
		}
	}
	printf("\n\n-----------------------------------------------------------------------------\n");
        
	return;
}

/*display : this function initialize and display the init bar*/
void end_bar() {

        printf("\n\n\t\t\t\t"GREEN"END GAME"RESET"\t\t\t\n");
        printf("\n******************************************************************************\n\n");

        return;
}

