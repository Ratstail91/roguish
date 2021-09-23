#include directories
INCLUDES+=.

#libraries
LIBS+=-static-libstdc++

#flags
CXXFLAGS+=-std=c++17

#source
CXXSRC=$(wildcard *.cpp)

#objects
OBJDIR=obj
OBJ+=$(CXXSRC:.cpp=.o)

#output
OUTDIR=../out
OUT=$(addprefix $(OUTDIR)/,out)

#targets
all: $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(OUT) $(OBJ) $(LIBS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<