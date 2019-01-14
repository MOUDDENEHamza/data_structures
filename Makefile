MAKE = make
GCC = gcc
SRC_TP1 = src/tp1/
FILE_TP1 = hello sum update_sum
BIN = bin/
LIB = -lm
GIT = git
ADD = add .
COMMIT = commit -m
PUSH = push
READ = @read -p

all :
	$(READ) "Enter the number of TP that you want compile : " number; \
	$(MAKE) compile_tp$$number -s; \
	$(MAKE) run_tp$$number -s;

compile_tp1 : $(SRC_TP1)
	for src in $(FILE_TP1); do \
		$(GCC) $(SRC_TP1)$$src.c -o $(BIN)$$src $(LIB); \
	done

run_tp1 : 
	for src in $(FILE_TP1); do \
                echo '\n'--------------------$$src.c--------------------; \
                ./$(BIN)$$src; \
		echo ---------------------------------------------'\n'; \
	done

git : 
	$(READ) "Enter the message to set up the commit : " message; \
	$(GIT) $(ADD) && $(GIT) $(COMMIT) "$$message" && $(GIT) $(PUSH);

clean : 
	rm $(BIN)*
