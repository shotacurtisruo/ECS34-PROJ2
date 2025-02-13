CXX = g++
CXXFLAGS = -std=c++17 -Wall -g -Iproj2/include -I/opt/homebrew/include
LDFLAGS = -L/opt/homebrew/lib -lgtest -lgtest_main -lpthread
OBJ_DIR = obj
BIN_DIR = bin

# Targets
all: create_dirs

# Create obj and bin directories
create_dirs:
	@mkdir -p $(OBJ_DIR) $(BIN_DIR)

# Clean up the directories (optional)
clean:
	@echo "cleaning junk up"
	@rm -rf $(OBJ_DIR) $(BIN_DIR)
	
