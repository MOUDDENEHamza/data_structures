#include <stdio.h>
#include <string.h>
#include <math.h>

#define BUFFER 255
#define RED "\x1B[31m"
#define YELLOW "\x1B[33m"
#define RESET "\x1B[0m"

void display_message(char *msg){
	printf("%s\n", msg);
	return;
}

int isCharInteger(char *c){
	switch(*c){
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case '-':
			return 1;
		
	}
	printf(RED"ERROR :"RESET" Wrong usage, parameters param1 and param2 should be integers when executing ./sum param1 param2.\n");
	return 0;
}

int charToInteger( char *c){
	int x;
	x = *c - '0';	
	return x;
}

int stringToInteger(char t[]){
	int res = 0;
	int i;
	int size = strlen(t);
	
	if (t[0] == '-'){
		for (i = 1; i < size; i++){
			res -= charToInteger(&t[i]) * pow(10, (size - 1) - i);
		}	
	} else{
		for (i = 0; i < size; i++){
			res += charToInteger(&t[i]) * pow(10, (size - 1) - i);
		}
	}

	return res;
}

/*Main loop*/
int main(int argc, char *argv[]){
	//Initialize variables.
	int n = 2;
	int k;
	int i;
	int j;
	int res = 0;
	char c;
	char t[n][BUFFER];
	char msg[BUFFER] = YELLOW"WARNING :"RESET" You can enter just 2 parameters.";

	display_message(msg);
	for (k = 0; k < n; k++){
		printf("Enter your parameters N°%d : ", k + 1);
		scanf("%s", t[k]);
	}
	for (i = 0; i < n; i++){
		for (j = 0; j < strlen(t[i]); j++){	
			if (isCharInteger(&t[i][j]) == 0){
				return 1;
			}
		}
		if ( i == n - 1){
			printf("%d = ", stringToInteger(t[i]));
		} else{
			printf("%d + ", stringToInteger(t[i]));
		}
		res += stringToInteger(t[i]);
	}
	
	printf("%d\n", res);

	return 0;	
}
