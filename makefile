CFLAGS = -O
CC = g++

driver: driver.o
	$(CC) $(CFLAGS) -o driver driver.o finds.o --std=c++11

driver.o: finds.o driver.cpp
	$(CC) $(CFLAGS) -c driver.cpp --std=c++11

finds.o: finds.h finds.cpp
	$(CC) $(CFLAGS) -c finds.cpp --std=c++11

run:
	./driver

clean:
	rm -f core *.o
