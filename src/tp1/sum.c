#include <stdio.h>

#define BUFFER 255
#define RED "\x1B[31m"
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
			return 1;
		
	}
	return 0;
}

int main(int argc, char *argv[]){
	int i = 0;
	char c;
	char msg[BUFFER] = RED"ERROR :"RESET" Wrong usage, 2 parameters expected: ./sum param1 param2";

	if (argc > 3){
		display_message(msg);
		return 1;
	}

	for (i = 1; i < argc; i++){
		if (isCharInteger(argv[i]) == 0){
			printf(RED"ERROR :"RESET" Wrong usage, the parameters expected are the integers.\n");
			return 1;
		} 
	}
	
	return 0;
}
