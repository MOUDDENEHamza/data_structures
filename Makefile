GCC = gcc
SRC_TP1 = src/tp1/
FILE_TP1 = hello sum update_sum
BIN = bin/
LIB = -lm
GIT = git
ADD = add .
COMMIT = commit -m "release"
PUSH = push

compile_tp1 : $(SRC_TP1)
	for src in $(FILE_TP1); do \
		$(GCC) $(SRC_TP1)$$src.c -o $(BIN)$$src $(LIB); \
	done

run_tp1 : 
	for src in $(FILE_TP1); do \
                echo --------------------$$src.c--------------------; \
                ./$(BIN)$$src; \
		echo ---------------------------------------------; \
	done

git : 
	$(GIT) $(ADD) && $(GIT) $(COMMIT) && $(GIT) $(PUSH)

clean : 
	rm bin/*
