#include <stdio.h>
#include <string.h>
#include "gameRules.h"

/*Update the game*/
void update(card game1[], card game2[], int *N1, int *N2, card a, card b){
        int i;
	
	*N1 += 1;
        *N2 -= 1;
        game1[*N1 - 1] = a;
        game1[*N1] = b;
 	for (i = 0; i < *N1; i++){
                game1[i] = game1[i + 1];
        }
        for (i = 0; i < *N2; i++){
                game2[i] = game2[i + 1];
        }
 
 	return;
}

/*Handle the result of a battle (1 shot)*/
void play(card game1[], card game2[], int *N1, int *N2){
        card a, b;
        a = game1[0];
        b = game2[0];
 
 	if ( game1[0].value > game2[0].value){
                update(game1, game2, N1, N2, a, b);
                return;
        }
        if ( game1[0].value < game2[0].value){
                update(game2, game1, N2, N1, b, a);
                return;
        } else {
                if (strcmp(game1[0].color, "heart") == 0 && strcmp(game2[0].color, "heart") != 0){
                        update(game1, game2, N1, N2, a, b);
			return;
                }
                if (strcmp(game2[0].color, "heart") == 0 && strcmp(game1[0].color, "heart") != 0){
			update(game2, game1, N2, N1, b, a);
			return;
                }
                if (strcmp(game1[0].color, "spade") == 0 && strcmp(game2[0].color, "spade") != 0){
                        update(game1, game2, N1, N2, a, b);
			return;
                }
                if (strcmp(game2[0].color, "spade") == 0 && strcmp(game1[0].color, "spade") != 0){
                        update(game2, game1, N2, N1, b, a);
			return;
                }
                if (strcmp(game1[0].color, "diamond") == 0 && strcmp(game2[0].color, "diamond") != 0){
                        update(game1, game2, N1, N2, a, b);
			return;
                }
                if (strcmp(game2[0].color, "diamond") == 0 && strcmp(game1[0].color, "diamond") != 0){
                        update(game2, game1, N2, N1, b, a);
			return;
                }
        }

        return;
}
