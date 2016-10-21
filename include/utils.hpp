#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <ctime>
#include <vector>
#include <map>
#include <algorithm>
#include <chrono>
typedef std::chrono::high_resolution_clock Clock;

using namespace std;
#define DEBUG 0

void sentinel(int i);
vector<int> eratosthenesSieve(int n);
map<int,int> primeFactorization(int n);
