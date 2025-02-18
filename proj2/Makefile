
CXX = g++
CXXFLAGS = -std=c++17 -Wall -g -Iproj1/include -I/opt/homebrew/include
LDFLAGS = -L/opt/homebrew/lib -lgtest -lgtest_main -lpthread
OBJ_DIR = obj
BIN_DIR = bin


# Source files (update if filenames differ)
SRC = proj2/src/StringUtils.cpp
TEST_SRC = proj2/testsrc/StringUtilsTest.cpp


# Object files (must match source filenames)
OBJS = $(OBJ_DIR)/StringUtils.o $(OBJ_DIR)/StringUtilsTest.o


# Target executable
TARGET = $(BIN_DIR)/testutils


# Default target: build and run tests
all: directories $(TARGET)
	@echo "Running tests..."
	@./$(TARGET)


# Link object files into executable
$(TARGET): $(OBJS)
	@echo "did the link .o file to executable work -"
	@$(CXX) $(CXXFLAGS) $^ -o $@ $(LDFLAGS)


# Compile source files
$(OBJ_DIR)/%.o: proj2/src/%.cpp
	@echo "didit compile the source files -"
	@$(CXX) $(CXXFLAGS) -c $< -o $@


# Compile test files
$(OBJ_DIR)/%.o: proj2/testsrc/%.cpp
	@echo "did it compile the test files -"
	@$(CXX) $(CXXFLAGS) -c $< -o $@


# Create directories
directories:
	@mkdir -p $(OBJ_DIR) $(BIN_DIR)


# Clean build artifacts
clean:
	@echo "did this work - the cleaning part"
  #these are just to see which ones ran and worked.
	@rm -rf $(OBJ_DIR) $(BIN_DIR)