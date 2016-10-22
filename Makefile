COMP=g++
CFLAGS=-Wall -ansi -pedantic -std=c++11
LDFLAGS=

OBJ = obj/
SRC = src/
INC = include/

all: 6.exe 7.exe 8.exe 9.exe 10.exe 11.exe 12.exe testPrimeFactorization.exe testEratosthenes.exe

6.exe: $(OBJ)6.o
	$(COMP) -o $@ $^ $(LDFLAGS)
$(OBJ)6.o: $(SRC)6.cpp
	$(COMP) -o $@ -c $^ -I$(INC) $(CFLAGS)

7.exe: $(OBJ)7.o $(OBJ)utils.o 
	$(COMP) -o $@ $^ $(LDFLAGS)
$(OBJ)7.o: $(SRC)7.cpp
	$(COMP) -o $@ -c -I$(INC) $^ $(CFLAGS)

8.exe: $(OBJ)8.o $(OBJ)utils.o 
	$(COMP) -o $@ $^ $(LDFLAGS)
$(OBJ)8.o: $(SRC)8.cpp
	$(COMP) -o $@ -c $^ -I$(INC) $(CFLAGS)

9.exe: $(OBJ)9.o $(OBJ)utils.o 
	$(COMP) -o $@ $^ $(LDFLAGS)
$(OBJ)9.o: $(SRC)9.cpp
	$(COMP) -o $@ -c $^ -I$(INC) $(CFLAGS)

10.exe: $(OBJ)10.o $(OBJ)utils.o 
	$(COMP) -o $@ $^ $(LDFLAGS)
$(OBJ)10.o: $(SRC)10.cpp
	$(COMP) -o $@ -c $^ -I$(INC) $(CFLAGS)

11.exe: $(OBJ)11.o $(OBJ)utils.o 
	$(COMP) -o $@ $^ $(LDFLAGS)
$(OBJ)11.o: $(SRC)11.cpp
	$(COMP) -o $@ -c $^ -I$(INC) $(CFLAGS)

12.exe: $(OBJ)12.o $(OBJ)utils.o 
	$(COMP) -o $@ $^ $(LDFLAGS)
$(OBJ)12.o: $(SRC)12.cpp
	$(COMP) -o $@ -c -I$(INC) $^ $(CFLAGS)

testPrimeFactorization.exe: $(OBJ)testPrimeFactorization.o $(OBJ)utils.o 
	$(COMP) -o $@ $^ $(LDFLAGS)
$(OBJ)testPrimeFactorization.o: $(SRC)testPrimeFactorization.cpp
	$(COMP) -o $@ -c $^ -I$(INC) $(CFLAGS)

testEratosthenes.exe: $(OBJ)testEratosthenes.o $(OBJ)utils.o 
	$(COMP) -o $@ $^ $(LDFLAGS)
$(OBJ)testEratosthenes.o: $(SRC)testEratosthenes.cpp
	$(COMP) -o $@ -c $^ -I$(INC) $(CFLAGS)

$(OBJ)utils.o: $(SRC)utils.cpp
	$(COMP) -o $@ -c $^ -I$(INC) $(CFLAGS)

clean:
	@rm -v $(wildcard *.exe)
	@rm -v $(wildcard $(OBJ)*.o)
