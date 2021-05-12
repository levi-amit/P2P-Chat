

CC=clang
CC_FLAGS=-Wall
CC_OBJECT=-c -O0
CC_OUTPUT=-o

# Build directories
OBJ=obj
BIN=bin
SRC=../src

# Source directories
HEADER=$(SRC)/include
CODE=$(SRC)

# Built files
OBJS=$(wildcard $(OBJ)/*)
BINS=$(wildcard $(BIN)/*)

# Make dump configuration
OD=objdump
ODFLAGS=-M intel -xdzs
DUMP=dump
DUMPS=$(foreach I,$(OBJS) $(BINS),$I.$(OD))




all: $(BIN)/chat.exe
	make dump

$(BIN)/chat.exe: $(OBJ)/chat.o $(OBJ)/libprint.o
	$(CC) $(CC_FLAGS) $(CC_OUTPUT) $@ $^


$(OBJ)/%.o: $(CODE)/%.c
	$(CC) $(CC_FLAGS) $(CC_OBJECT) $(CC_OUTPUT) $@ $^




dump: $(DUMPS)

%.$(OD): %
	$(OD) $(ODFLAGS) $^ > $(DUMP)/$@




clean:
	rm -f $(OBJ)/* $(BIN)/* $(DUMP)/$(OBJ)/* $(DUMP)/$(BIN)/*