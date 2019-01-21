#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "displayShell.h"

#define BUFFER 255
#define SIZE_GAME 32

/*This structure is about battle cards*/
typedef struct Card{
	int value;
	char color[BUFFER];
} Card;

/*Fill the array with the 32 cards*/
void init_game(Card game[]){
	int i;
	for (i = 0; i < SIZE_GAME; i++){
		game[i].value = 7 + (i % 8);
		if (i >= 0 && i < 8){
			strcpy(game[i].color, "heart");
		}
		if (i >= 8 && i < 16){
                        strcpy(game[i].color, "spade");
                }
		if (i >= 16 && i < 24){
                        strcpy(game[i].color, "diamond");
                }
		if (i >= 24 && i < 32){
                	strcpy(game[i].color, "club");
                }
	}
	return;
}

/*Generate a random integer between 0 and 31*/
int random_integer(){
	return rand() % 32;
}

/*Permute 2 cards*/
void permute(Card *card1, Card *card2){
	Card temp = *card1;
	*card1 = *card2;
	*card2 = temp;
	return;
}

/*Mix the cards*/
void mix(Card game[]){
	int i;
	for (i = 0; i < SIZE_GAME / 2; i++){
		permute(&game[random_integer()], &game[random_integer()]);//Permute two random cards.
	}
	return;
}

/*Display card (Value, color)*/
void display_card(Card X){
	printf("%d, %s\n", X.value, X.color);
	return;
}

/*Display N cards*/
void display(Card game[],int *N){
	int i;
        for (i = 0; i < *N; i++){
		display_card(game[i]);
        }
	return;
}

/*Distribute the cards to both players*/
void distribute(Card game[], Card game1[], Card game2[], int *N){
        int i;
        for (i = 0; i < *N / 2; i ++){
		game1[i] = game[i];
	} 
	for (i = *N / 2; i < SIZE_GAME; i++){
		game2[i - (*N / 2)] = game[i];
	}
	return;
}

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
		update(game1, game2, N1, N2);
		game1[*N1 - 2] = a;
	        game1[*N1 - 1] = b;	
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
	launch_program();
	init_game(game);//Fill the array with the 32 cards.
	srand(12500); //Initialization of the random generator.
	random_integer();//Fill the array with the 32 cards.
	mix(game);//Mix the cards.
	display(game, &N);//Display the card game.
	distribute(game, game1, game2, &N);//Distribute the cards to both players.
        printf("*************game1*****************\n");
	display(game1, &N1);//Display the card game.
        printf("*************game2*****************\n");
	display(game2, &N2);//Display the card game.
	while (win(&N1, &N2) == 0) {//As the game is not ended.
		play(game1 ,game2, &N1, &N2);//Handle the result of a battle (1 shot).
		if (win(&N1, &N2) == 1){//If the game is ended.
			break;//End game.
		}
		printf("*************game1*****************\n");
        	display(game1, &N1);//Display the card game.
        	printf("*************game2*****************\n");
        	display(game2, &N2);//Display the card game.
		printf("turn : ");
		scanf("%d", &x);
	}
	return 0;
}
