CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = calculator_app
LIBRARY = libcalculator.a

SRCS = calculator.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS) $(LIBRARY)
	$(CXX) $(CXXFLAGS) -o $@ main.o -L. -lcalculator

$(LIBRARY): calculator.o
	ar rcs $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET) $(LIBRARY)
