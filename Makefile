# Compiler
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iinclude -g

# Source directories
SRC_DIR = src
UTILS_DIR = $(SRC_DIR)/utils
CORE_DIR = $(SRC_DIR)/core
FUNC_DIR = $(SRC_DIR)/functions

# Object directory
OBJ_DIR = build

# Source files
SRCS = $(SRC_DIR)/main.c \
	$(UTILS_DIR)/memoryError.c \
	$(UTILS_DIR)/clear.c \
	$(UTILS_DIR)/obtainChar.c \
	$(UTILS_DIR)/ind.c \
	$(UTILS_DIR)/isNotValid.c \
	$(UTILS_DIR)/isNotValidDim.c \
	$(UTILS_DIR)/obtainDim.c \
	$(UTILS_DIR)/isZero.c \
	$(UTILS_DIR)/swap.c \
	$(UTILS_DIR)/copyPaste.c \
	$(UTILS_DIR)/gauss_reduction.c \
	$(CORE_DIR)/enterCalculator.c \
	$(CORE_DIR)/help.c \
	$(CORE_DIR)/exitCalculator.c \
	$(FUNC_DIR)/save.c \
	$(FUNC_DIR)/initialize.c \
	$(FUNC_DIR)/initializeRandom.c \
	$(FUNC_DIR)/readFromFile.c \
	$(FUNC_DIR)/writeToFile.c \
	$(FUNC_DIR)/print.c \
	$(FUNC_DIR)/checkSym.c \
	$(FUNC_DIR)/transpose.c \
	$(FUNC_DIR)/findMaxColumn.c \
	$(FUNC_DIR)/duplicate.c \
	$(FUNC_DIR)/multiplyScalar.c \
	$(FUNC_DIR)/sum.c \
	$(FUNC_DIR)/subtract.c \
	$(FUNC_DIR)/multiply.c \
	$(FUNC_DIR)/reduce.c \
	$(FUNC_DIR)/determinant.c

# Object files in build/ with same folder structure
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Executable
TARGET = matrix

# Default target
all: $(TARGET)

# Link objects into executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

# Compile .c → .o, automatically creating subdirectories in build/
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean build files
clean:
	rm -rf $(OBJ_DIR) $(TARGET)

.PHONY: all clean

# usage 
# $ make clean
# $ make
