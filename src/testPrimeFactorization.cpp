#include "utils.hpp"

int main(int argc, char *argv[]){
  
  int n;
  if(argc == 1){
    n = 30;
  }else{
    n = atoi(argv[1]);
  }
  
  map<int,int> primesAndExp = primeFactorization(n);

  cout << n << " = 1";  
  for(auto &element : primesAndExp){
      cout << " x " << element.first << "^" << element.second;
	  }
  cout << endl;
  return 0;
}

