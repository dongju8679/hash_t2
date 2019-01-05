# Makefile v5

#CC = arm-none-linux-gnueabi-gcc
#CFLAGS = -Wall -march=armv4t
#LDFLAGS = -march=armv4t
#CC = gcc
CXX = g++
CFLAGS = -Wall -I/some/dir
LDFLAGS =
#LIBS = -lprint
LIBS = 
LIB_DIRS = -L./lib
#LIB_DIRS = 
INC = -I./include

PROGNAME = dongju
SRCS = $(wildcard *.cpp)
OBJS = $(patsubst %.cpp, %.o, $(SRCS))

$(PROGNAME): $(OBJS)
#$(CC) $(LDFLAGS) -o $@ $^
	$(CXX) $(LDFLAGS) $(LIBS) $(LIB_DIRS) $(INC) -o $@ $^

clean:
	rm -f *.o $(PROGNAME) depend

depend: $(SRCS)
	$(CXX) $(CFLAGS) -MM *.cpp > $@

-include depend
