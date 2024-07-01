# Makefile for graph.cpp

# Compiler
CXX := g++
# Compiler flags
CXXFLAGS := -std=c++11 -Wall
# Target executable
TARGET := main
# Source files
SRCS := main.cpp collatz.cpp tgaimage.cpp
# Object files (automatically generated from source files)
OBJS := $(SRCS:.cpp=.o)

# Main rule, build executable
all: $(TARGET)

# Linking rule: target depends on object files
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Compilation rule: each .cpp file generates a .o file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule: remove object files and executable
clean:
	rm -f $(OBJS) $(TARGET)