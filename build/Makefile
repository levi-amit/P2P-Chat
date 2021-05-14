
# Compiler
CC=clang
CC_FLAGS=-Wall
CC_OBJECT=-c -O0
CC_OUTPUT=-o

# Build directories
OBJ=objects
BIN=bin
SRC=../src

# Source directories
CODE=$(SRC)

# Built files
OBJS=$(wildcard $(OBJ)/*)
BINS=$(wildcard $(BIN)/*)

# Make dump configuration
OD=objdump
ODFLAGS=-M intel -xdzs
DUMP=dump
DUMPS=$(foreach I,$(OBJS) $(BINS),$I.$(OD))




all: $(BIN) $(OBJ) $(BIN)/chat.exe
	make dump_all


# Binaries
$(BIN)/chat.exe: $(OBJ)/conn_manager.o
	$(CC) $(CC_FLAGS) $(CC_OUTPUT) $@ $^


# Objects
$(OBJ)/%.o: $(CODE)/%.c
	$(CC) $(CC_FLAGS) $(CC_OBJECT) $(CC_OUTPUT) $@ $^


# Object Dump
dump_all: $(DUMP) $(DUMP)/$(OBJ) $(DUMP)/$(BIN) $(DUMPS)

%.$(OD): %
	$(OD) $(ODFLAGS) $^ > $(DUMP)/$@


# Directories
$(OBJ):
	mkdir $(OBJ)
$(BIN):
	mkdir $(BIN)
$(DUMP):
	mkdir $(DUMP)
$(DUMP)/$(OBJ):
	mkdir $(DUMP)/$(OBJ)
$(DUMP)/$(BIN):
	mkdir $(DUMP)/$(BIN)


# Clean
clean:
	rm -f $(OBJ)/* $(BIN)/* $(DUMP)/$(OBJ)/* $(DUMP)/$(BIN)/*