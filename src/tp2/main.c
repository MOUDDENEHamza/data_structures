#include <stdio.h>

typedef struct carte{
	/* à compléter */
} Carte;

void initjeu(Carte jeu[]){ /* remplit le tableau avec les 32 cartes */
	/* à compléter */
	return;
}

int alea32(){ /* genere un entier aleatoire compris entre 0 et 31 */
	/* à compléter */
	return 0;
}

void permute(Carte *carte1, Carte *carte2){ /* permute 2 cartes */
	/* à compléter */
	return;
}

void melange(Carte jeu[]){ /* melange les cartes */
	/* à compléter */
	return;
}

void affiche_carte(Carte X){ /* affiche une carte (valeur,couleur)*/
	/* à compléter */
	return;
}

void affiche(Carte jeu[],int N){/* affiche N cartes */
	/* à compléter */
	return;
}

void distribue(Carte jeu[], Carte jeu1[], Carte jeu2[]){ /* distribue les cartes aux deux joueurs */
	/* à compléter */
	return;
}

void joue1coup( Carte jeu1[], Carte jeu2[], int*N1, int*N2){ /* gere leresultat d’une bataille (1 coup) */
	/* à compléter */
	return;
}

int main(){
	Carte jeu[32];
	Carte jeu1[32]; /* cartes du joueur 1 */
	Carte jeu2[32];
	int N1=15; /* indice de la derniere carte joueur 1 */
	int N2=15;
	
	initjeu(jeu);
	srand(12500); /* initialisation du générateur aléatoire */
	melange(jeu);
	distribue(jeu,jeu1,jeu2);
	while () { /* tant que la partie n’est pas terminee */
	joue1coup(jeu1,jeu2,&N1,&N2);
	}
	/* afficher qui gagne et en combien de coups */
	return 0;
}
