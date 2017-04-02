#include "utils.hpp"

int main(int argc, char *argv[]){
  
  int n;
  if(argc == 1){
    n = 30;
  }else{
    n = atoi(argv[1]);
  }
  
  vector<int> primes = eratosthenesSieve(n);
  
  for(unsigned int i=0; i<primes.size(); i++){
    cout << primes[i] << " ";
  }
  cout << endl;
  return 0;
}

