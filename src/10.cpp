#include "utils.hpp"

int main(){
  
  long long limit = 2000000;
  long long sum = 0;
  
  vector<int> primeList;
  int size = 0;
  
  primeList = eratosthenesSieve(limit);
  
  cout << "number of primes : " << size << endl;
  for(int i=1; i<size; i++){
    sum += primeList[i];
  }
  
  cout << "The sum of all primes below 2 million is : " << sum << endl;

  return 0;
}
