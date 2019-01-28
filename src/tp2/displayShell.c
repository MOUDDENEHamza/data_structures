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
void display_card(Card X){
        printf("%d, %s", X.value, X.color);
        return;
}

/*Display N cards*/
void display(Card game[], Card game1[], Card game2[], int *N ,int *N1 ,int *N2){
        int i;
        printf("\n GAME \t\t "BLUE"GAME1"RESET" \t\t\t "RED"GAME2"RESET" \n");
	for (i = 0; i < *N; i++){
		if (i > *N1 && i > *N2 && game[i].value == 0) {
                        continue;
                }
		printf("\n");
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
