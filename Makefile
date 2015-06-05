all: main.cpp main.h place.cpp place.h prize.cpp prize.h
	g++ -o BSOD main.cpp place.cpp prize.cpp -Wall -pedantic

clean:
	rm BSOD
