#include "utils.hpp"
// 7th euler problem : finding the 10001st prime number

int main(){
	
	int n = 20000;
  vector<int> primes;
  while(primes.size() < 10001){
    n += 1000;
    primes = eratosthenesSieve(n);
  }
  cout << "size = " << primes.size() << endl;
  /*
  for(int i=0; i<primes.size(); i++){
		cout << primes[i] << " ";
	}
	*/
  cout << "and the 10 001st prime is ...... " << primes[10001] << endl;
	return 0;
}
