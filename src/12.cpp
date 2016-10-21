#include "utils.hpp"

int main(){
  
  int triangNb = 0;
  int nOfFactors = 0;
  int add = 1;
  map<int,int> primesAndExp;
  
  while(nOfFactors <= 500){
	  triangNb += add;
	  add++;
    //cout << "n = " << triangNb << endl;	  
	  primesAndExp = primeFactorization(triangNb);
	  nOfFactors = 1;

    
    //cout << "number : " << triangNb << " =====> " ;  
    /*for(auto &element : primesAndExp){
      cout << " x " << element.first << "^" << element.second;
	  }
    cout << endl;*/
	  for(auto &element : primesAndExp){
		  nOfFactors *= element.second+1;
	  }
    //cout << "nb of factors = " << nOfFactors << endl;
  }
  
  cout << "triangular number :  " << triangNb << " ==> nb of factors : " << nOfFactors << endl << "Bye!" << endl;
  return 0;
}
  
