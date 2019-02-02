MAKE = make
GCC = gcc
ECHO = echo
SRC_TP1 = src/tp1/
SRC_TP2 = src/tp2/
FILE_TP1 = hello sum update_sum
FILE_TP2 = main
BIN = bin/
LIB = lib/
SRC3 = $(wildcard src/tp3/*.c)
FLAG = -lm
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
		$(GCC) $(SRC_TP1)$$src.c -o $(BIN)$$src $(FLAG); \
	done

run_tp1 : 
	for src in $(FILE_TP1); do \
                $(ECHO) '\n'--------------------$$src.c--------------------; \
                ./$(BIN)$$src; \
		$(ECHO) ---------------------------------------------'\n'; \
	done

compile_tp2 :
	$(GCC) -I include/tp2/ -c src/tp2/displayShell.c src/tp2/init.c src/tp2/gameRules.c src/tp2/main.c
	mv displayShell.o init.o gameRules.o main.o $(LIB)
	$(GCC) -o $(BIN)main lib/*.o

run_tp2 : 
	./bin/main

compile_tp3 :
	$(GCC) -I include/tp3/ -c $(SRC3)
	mv *.o $(LIB)
	$(GCC) -o $(BIN)main $(LIB)*.o

run_tp3 : 
	./bin/main


git : 
	$(READ) "Enter the message to set up the commit : " message; \
	$(GIT) $(ADD) && $(GIT) $(COMMIT) "$$message" && $(GIT) $(PUSH);

clean : 
	rm $(BIN)* $(LIB)*
