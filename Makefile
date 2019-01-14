GCC = gcc
SRC_TP1 = src/tp1/
FILE_TP1 = hello sum update_sum
BIN = bin/
LIB = -lm
GIT = git
ADD = add .
COMMIT = commit -m
PUSH = push

all :
	@read -p "Enter the number of TP that you want compile : " number; \
	make compile -s; \
	make run -s;

compile : $(SRC_TP1)
	for src in $(FILE_TP1); do \
		$(GCC) $(SRC_TP1)$$src.c -o $(BIN)$$src $(LIB); \
	done

run : 
	for src in $(FILE_TP1); do \
                echo --------------------$$src.c--------------------; \
                ./$(BIN)$$src; \
		echo ---------------------------------------------; \
	done

git : 
	@read -p "Enter the message to set up the commit : " message; \
	$(GIT) $(ADD) && $(GIT) $(COMMIT) $$message && $(GIT) $(PUSH);

clean : 
	rm bin/*
