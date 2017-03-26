COMP=g++
<<<<<<< HEAD
CXXFLAGS=-O2 -W -Wall -ansi -pedantic -std=c++11
debug: CXXFLAGS+=-DDEBUG -g 
=======
CFLAGS=-Wall -ansi -pedantic -std=c++11
>>>>>>> e4476e461c0d657be059391726b0e17b41b5dc88
LDFLAGS=

OBJ = obj/
SRC = src/
INC = include/

all: 6.exe 7.exe 8.exe 9.exe 10.exe 11.exe 12.exe 13.exe 14.exe 16.exe 18.exe testPrimeFactorization.exe testEratosthenes.exe
debug: 6.exe 7.exe 8.exe 9.exe 10.exe 11.exe 12.exe 13.exe 14.exe 16.exe 18.exe testPrimeFactorization.exe testEratosthenes.exe

6.exe: $(OBJ)6.o
	$(COMP) -o $@ $^ $(LDFLAGS)
$(OBJ)6.o: $(SRC)6.cpp
	$(COMP) -o $@ -c $^ -I$(INC) $(CXXFLAGS)

7.exe: $(OBJ)7.o $(OBJ)utils.o 
	$(COMP) -o $@ $^ $(LDFLAGS)
$(OBJ)7.o: $(SRC)7.cpp
	$(COMP) -o $@ -c -I$(INC) $^ $(CXXFLAGS)

8.exe: $(OBJ)8.o $(OBJ)utils.o 
	$(COMP) -o $@ $^ $(LDFLAGS)
$(OBJ)8.o: $(SRC)8.cpp
	$(COMP) -o $@ -c $^ -I$(INC) $(CXXFLAGS)

9.exe: $(OBJ)9.o $(OBJ)utils.o 
	$(COMP) -o $@ $^ $(LDFLAGS)
$(OBJ)9.o: $(SRC)9.cpp
	$(COMP) -o $@ -c $^ -I$(INC) $(CXXFLAGS)

10.exe: $(OBJ)10.o $(OBJ)utils.o 
	$(COMP) -o $@ $^ $(LDFLAGS)
$(OBJ)10.o: $(SRC)10.cpp
	$(COMP) -o $@ -c $^ -I$(INC) $(CXXFLAGS)

11.exe: $(OBJ)11.o $(OBJ)utils.o 
	$(COMP) -o $@ $^ $(LDFLAGS)
$(OBJ)11.o: $(SRC)11.cpp
	$(COMP) -o $@ -c $^ -I$(INC) $(CXXFLAGS)

12.exe: $(OBJ)12.o $(OBJ)utils.o 
	$(COMP) -o $@ $^ $(LDFLAGS)
$(OBJ)12.o: $(SRC)12.cpp
	$(COMP) -o $@ -c -I$(INC) $^ $(CXXFLAGS)

13.exe: $(OBJ)13.o $(OBJ)utils.o 
	$(COMP) -o $@ $^ $(LDFLAGS)
$(OBJ)13.o: $(SRC)13.cpp
	$(COMP) -o $@ -c -I$(INC) $^ $(CXXFLAGS)

14.exe: $(OBJ)14.o $(OBJ)utils.o 
	$(COMP) -o $@ $^ $(LDFLAGS)
$(OBJ)14.o: $(SRC)14.cpp
	$(COMP) -o $@ -c -I$(INC) $^ $(CXXFLAGS)

16.exe: $(OBJ)16.o $(OBJ)utils.o 
	$(COMP) -o $@ $^ $(LDFLAGS)
$(OBJ)16.o: $(SRC)16.cpp
	$(COMP) -o $@ -c -I$(INC) $^ $(CXXFLAGS)

18.exe: $(OBJ)18.o $(OBJ)utils.o 
	$(COMP) -o $@ $^ $(LDFLAGS)
$(OBJ)18.o: $(SRC)18.cpp
	$(COMP) -o $@ -c -I$(INC) $^ $(CXXFLAGS)

testPrimeFactorization.exe: $(OBJ)testPrimeFactorization.o $(OBJ)utils.o 
	$(COMP) -o $@ $^ $(LDFLAGS)
$(OBJ)testPrimeFactorization.o: $(SRC)testPrimeFactorization.cpp
	$(COMP) -o $@ -c $^ -I$(INC) $(CXXFLAGS)

testEratosthenes.exe: $(OBJ)testEratosthenes.o $(OBJ)utils.o 
	$(COMP) -o $@ $^ $(LDFLAGS)
$(OBJ)testEratosthenes.o: $(SRC)testEratosthenes.cpp
	$(COMP) -o $@ -c $^ -I$(INC) $(CXXFLAGS)

$(OBJ)utils.o: $(SRC)utils.cpp
	$(COMP) -o $@ -c $^ -I$(INC) $(CXXFLAGS)

clean:
	@rm -v $(wildcard *.exe)
	@rm -v $(wildcard $(OBJ)*.o)
