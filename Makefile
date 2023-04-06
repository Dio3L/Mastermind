EXEC=Mastermind
SRC_DIR=./src
INC_DIR=./include
CFLAGS = -Wall -Werror -Wextra -g

$(EXEC) : $(SRC_DIR)/*.cpp $(INC_DIR)/*.hpp main.cpp 
	g++ -o $(EXEC) main.cpp $(SRC_DIR)/*.cpp -I$(INC_DIR)

$(EXEC)_debug : $(SRC_DIR)/*.cpp $(INC_DIR)/*.hpp main.cpp 
	g++ -o $(EXEC) main.cpp $(SRC_DIR)/*.cpp -I$(INC_DIR) $(CFLAGS)

run:$(EXEC)
	./$(EXEC)

debug:$(EXEC)_debug
	
clean:
	rm -rf *.o $(EXEC)

all:$(EXEC)