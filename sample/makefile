# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -g

# Directories
BUILD_DIR = BUILD
BIN_DIR = BIN

# Target executable
TARGET = $(BIN_DIR)/main

# Source files
SRCS = main.cpp print.cpp factorial.cpp multiply.cpp

# Object files
OBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.cpp=.o))

# Default rule to build and run the executable
all: $(TARGET) run

# Rule to link object files into the target executable
$(TARGET): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile .cpp files into .o files
$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to run the executable
run: $(TARGET)
	@$(SHELL) -c "./$(TARGET)" || .\$(TARGET)

# Clean rule to remove generated files
clean:
	@rm -rf $(BUILD_DIR) $(BIN_DIR) || rmdir /s /q $(BUILD_DIR) $(BIN_DIR)
