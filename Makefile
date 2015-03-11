# Makefile for BCS 230 Source Code.
# Rather than having to type this out a thousand times

CXX = g++


### Targets ###

all: $(shell ls hw) $(shell ls lab)

hw%: 
	cd hw/hw$*
	$(CXX) -o hw/hw$*/hw$* $(wildcard hw/hw$*/*.cpp)

lab%:
	cd lab/lab$* 
	$(CXX) -o lab/lab$*/lab$* $(wildcard lab/lab$*/*.cpp)

