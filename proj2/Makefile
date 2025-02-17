CXX = g++
CXXFLAGS = -std=c++17 -Wall -g -Iproj2/include -I/opt/homebrew/include
LDFLAGS = -L/opt/homebrew/lib -lgtest -lgtest_main -lpthread

OBJ_DIR = obj
BIN_DIR = bin


SRC = proj2/src/%.cpp
TESTSRC = proj2/testsrc/%.cpp
OBJS = $(OBJ_DIR)/StringUtils.o $(OBJ_DIR)/StringDataSource.o $(OBJ_DIR)/StringDataSink.o $(OBJ_DIR)/DSVReader.o $(OBJ_DIR)/XMLReader.o $(OBJ_DIR)/XMLWriter.o
TESTOBJS = $(OBJ_DIR)/StringUtilsTest.o $(OBJ_DIR)/StringDataSourceTest.o $(OBJ_DIR)/StringDataSinkTest.o $(OBJ_DIR)/DSVTest.o $(OBJ_DIR)/XMLTest.o


TARGETS = $(BIN_DIR)/teststrutils $(BIN_DIR)/teststrdatasource $(BIN_DIR)/teststrdatasink $(BIN_DIR)/testdsv $(BIN_DIR)/testxml


test: $(TARGETS)
	@$(BIN_DIR)/teststrutils
	@$(BIN_DIR)/teststrdatasource
	@$(BIN_DIR)/teststrdatasink
	@$(BIN_DIR)/testdsv
	@$(BIN_DIR)/testxml
	@echo "tests worked"




# make directories
directories:
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(BIN_DIR)
	@echo "directories made"


# compile
$(OBJ_DIR)/%.o: proj2/src/%.cpp | directories
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "src compiled"