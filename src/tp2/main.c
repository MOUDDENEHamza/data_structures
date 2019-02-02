#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "struct.h"
#include "displayShell.h"
#include "init.h"
#include "gameRules.h"

/*Main loop*/
int main(int argc, char *argv[]){
	/*Initialize variables*/
	card game[32]; //Card game.
	card game1[32]; //Card game of first player.
	card game2[32];//Card game of second player.
	int N = 32;//Number of card game.
	int N1 = 16;//Index of the last card of first player.
	int N2 = 16;//Index of the last card of second player.
	int turn;//number ot turn played.
	time_t t;//Integer value to be used as seed by the pseudo-random number generator.

	/*Start program*/
	launch_program();//Display the init bar.
	//handle_card();//Implement the data structure of card.
	init_game(game);//Fill the array with the 32 cards.
	srand(time(&t)); //Initialization of the random generator.
	random_integer();//Fill the array with the 32 cards.
	mix(game);//Mix the cards.
	display(game, game1, game2, &N, &N1, &N2);//Display the card game.
	distribute(game, game1, game2, &N);//Distribute the cards to both players.
	display(game, game1, game2, &N, &N1, &N2);//Display the card game.
	while (win(&N1, &N2, &turn) == 0) {//As the game is not ended.
		turn += 1;//Increment the turn.
		play(game1 ,game2, &N1, &N2);//Handle the result of a battle (1 shot).
		if (win(&N1, &N2, &turn) == 1) {//If the game is ended.
			display(game, game1, game2, &N, &N1, &N2);//Display the end card game.
			break;//End game.
		}
	        display(game, game1, game2, &N, &N1, &N2);//Display the card game.
	}
	end_bar();//Display the end bar.

	return 0;
}
