CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic
TARGET = main
SOURCES = main.cpp triangle.cpp

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean
