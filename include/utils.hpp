#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>
#include <ctime>
#include <vector>
#include <deque>
#include <map>
#include <algorithm>
#include <chrono>
#include <bitset>

typedef std::chrono::high_resolution_clock Clock;

using namespace std;

void sentinel(int i);
vector<int> eratosthenesSieve(int n);
map<int,int> primeFactorization(int n);
deque<int> sommeGrandsNombres(deque<int> a, deque<int> b);
