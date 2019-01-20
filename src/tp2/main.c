#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
void distribue(Card game[], Card game1[], Card game2[]){
	
	return;
}

void joue1coup(Card jeu1[], Card jeu2[], int*N1, int*N2){ /* gere leresultat d’une bataille (1 coup) */
	/* à compléter */
	return;
}

/*Main loop*/
int main(int argc, char *argv[]){
	/*Initialize variables*/
	Card game[32]; //Card game.
	Card game1[32]; //Card game of first player.
	Card game2[32];//Card game of second player.
	int N = 32;//Number of card game.
	int N1 = 15;//Index of the last card of first player.
	int N2 = 15;//Index of the last card of second player.

	init_game(game);//Fill the array with the 32 cards.
	srand(12500); //Initialization of the random generator.
	random_integer();//Fill the array with the 32 cards.
	mix(game);//Mix the cards.
	display(game, &N);//Display the card game.
	distribute(game, game1, game2);//Distribute the cards to both players.
	
	//while (1) { /* tant que la partie n’est pas terminee */
	//	joue1coup(jeu1,jeu2,&N1,&N2);
	//}
	/* afficher qui gagne et en combien de coups */
	
	return 0;
}
