#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"
#include "displayShell.h"
#include "init.h"

#define BUFFER 255
#define SIZE_GAME 32

/*Update the game*/
void update(Card game1[], Card game2[], int *N1, int *N2){
	int i;
	for (i = 0; i < *N1 - 1; i++){
		game1[i] = game1[i + 1];
	}
	for (i = 0; i < *N2 - 1; i++){
                game2[i] = game2[i + 1];
        }
	return; 
}

/*Handle the result of a battle (1 shot)*/
void play(Card game1[], Card game2[], int *N1, int *N2){
	Card a, b;
	a = game1[0];
	b = game2[0];
	if ( game1[0].value > game2[0].value){
		*N2 -= 1;
		*N1 += 1;
		printf("%d\t%d\n", *N1, *N2);
		game1[*N1 - 2] = a;
		game1[*N1 - 1] = b;	
		printf("%d\t%d\n", *a.value, *b.value);
		update(game1, game2, N1, N2);
	}
	if ( game2[0].value > game1[0].value){
                *N2 += 1;
                *N1 -= 1;
                update(game1, game2, N1, N2);
                game2[*N2 - 2] = a;
                game2[*N2 - 1] = b;
        }
	else {
 		if (strcpy(game1[0].color, "heart") == 0 && strcpy(game2[0].color, "heart") != 0){
                	*N2 -= 1;
                	*N1 += 1;
                	update(game1, game2, N1, N2);
                	game1[*N1 - 2] = a;
                	game1[*N1 - 1] = b;
			return;
		}
		if (strcpy(game2[0].color, "heart") == 0 && strcpy(game1[0].color, "heart") != 0){
			*N2 += 1;
	                *N1 -= 1;
        	        update(game1, game2, N1, N2);
               		game2[*N2 - 2] = a;
                	game2[*N2 - 1] = b;
			return;
		}
		if (strcpy(game1[0].color, "spade") == 0 && strcpy(game2[0].color, "spade") != 0){
                        *N2 -= 1;
                        *N1 += 1;
                        update(game1, game2, N1, N2);
                        game1[*N1 - 2] = a;
                        game1[*N1 - 1] = b;
			return;
                }
                if (strcpy(game2[0].color, "spade") == 0 && strcpy(game1[0].color, "spade") != 0){
                        *N2 += 1;
                        *N1 -= 1;
                        update(game1, game2, N1, N2);
                        game2[*N2 - 2] = a;
                        game2[*N2 - 1] = b;
                	return;
		}
		if (strcpy(game1[0].color, "diamond") == 0 && strcpy(game2[0].color, "diamond") != 0){
                        *N2 -= 1;
                        *N1 += 1;
                        update(game1, game2, N1, N2);
                        game1[*N1 - 2] = a;
                        game1[*N1 - 1] = b;
			return;
                }
                if (strcpy(game2[0].color, "diamond") == 0 && strcpy(game1[0].color, "diamond") != 0){
                        *N2 += 1;
                        *N1 -= 1;
                        update(game1, game2, N1, N2);
                        game2[*N2 - 2] = a;
                        game2[*N2 - 1] = b;
			return;
                }
	}
	return;
}

int win(int *N1, int *N2){
	if (*N1 == 0){
		printf("the second player win.\n");
		return 1;
	}
	if (*N2 == 0){
		printf("the first player win.\n");
                return 1;
	}
	return 0;
}

/*Main loop*/
int main(int argc, char *argv[]){
	/*Initialize variables*/
	Card game[32]; //Card game.
	Card game1[32]; //Card game of first player.
	Card game2[32];//Card game of second player.
	int N = 32;//Number of card game.
	int N1 = 16;//Index of the last card of first player.
	int N2 = 16;//Index of the last card of second player.
	int x;
	/*Start program*/
	launch_program();//Display the init bar.
	init_game(game);//Fill the array with the 32 cards.
	srand(12500); //Initialization of the random generator.
	random_integer();//Fill the array with the 32 cards.
	mix(game);//Mix the cards.
	display(game, game1, game2, &N, &N1, &N2);//Display the card game.
	distribute(game, game1, game2, &N);//Distribute the cards to both players.
	display(game, game1, game2, &N, &N1, &N2);//Display the card game.
	while (win(&N1, &N2) == 0) {//As the game is not ended.
		play(game1 ,game2, &N1, &N2);//Handle the result of a battle (1 shot).
		if (win(&N1, &N2) == 1) {//If the game is ended.
			break;//End game.
		}
	        display(game, game1, game2, &N, &N1, &N2);//Display the card game.
		printf("turn : ");
		scanf("%d", &x);
	}
	return 0;
}
