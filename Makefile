CC = g++
MPICC = mpic++
CFLAGS = -c	-Wall -I$(IDIR) -std=c++11

IDIR = .
SRCDIR = .
OBJDIR = .
SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SOURCES))

EXE = translate

.phony: depend clean

all: $(EXE)

$(EXE): $(OBJECTS)
	$(CC) $^ -o $@ $(GFLAGS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm $(EXE) $(OBJECTS)
