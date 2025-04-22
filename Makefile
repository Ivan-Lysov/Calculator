CC=gcc
CFLAGS=-Wall -Iinclude
SRC=src
OBJ=build

SOURCES=$(SRC)/main.c $(SRC)/calculator.c $(SRC)/history.c
OBJECTS=$(SOURCES:$(SRC)/%.c=$(OBJ)/%.o)
TARGET=calc

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ)/%.o: $(SRC)/%.c
	@mkdir -p $(OBJ)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)/*.o $(TARGET)
