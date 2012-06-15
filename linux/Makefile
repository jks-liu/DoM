#filename: Makefile
#author:   jks
#date:     14-Jun-201

.PHONY: all
all: dom

VPATH=../src

CXX=g++
CXXFLAGS = -I../inc/ -I/usr/local/boost_1_49_0/ 

OBJS=./main.o 

dom: $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o dom

$(OBJS): %.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o ./$@

.PHONY: clean
clean: clean_objs
	rm -f ./dom

.PHONY: clean_objs
clean_objs:
	rm -f ./*.o

.PHONY: run
run:
	./dom


