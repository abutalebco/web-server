CXX      := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -pedantic -g

TARGET   := bin/webserver
SRC      := WebServer.cpp sockets/*.cpp

.PHONY: all run clean rebuild

all: $(TARGET)

$(TARGET): $(SRC)
	mkdir -p bin
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf bin

rebuild: clean all
