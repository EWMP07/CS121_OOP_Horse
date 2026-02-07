CXX = g++
CXXFLAGS = -Wall -std=c++17

OBJ = main.o Horse.o Race.o

race: $(OBJ)
	$(CXX) $(CXXFLAGS) -o race $(OBJ)

main.o: main.cpp Race.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Horse.o: Horse.cpp Horse.h
	$(CXX) $(CXXFLAGS) -c Horse.cpp

Race.o: Race.cpp Race.h Horse.h
	$(CXX) $(CXXFLAGS) -c Race.cpp

run: race
	./race

clean:
	rm -f *.o race