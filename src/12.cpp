#include "utils.hpp"

int main(){
  
  int triangNb;
  int nOfFactors = 0;
  int n=2;
  while(nOfFactors <= 500){
	  triangNb = 0.5*n*(n-1); 
    cout << "n = " << triangNb << endl;	  
	  nOfFactors = 2;
    int sqrtTriNbr = sqrt(triangNb);
    for(int k=2; k<sqrtTriNbr; k++)
      if(triangNb%k==0) nOfFactors+=2;
    n++;
  }
  
  cout << "triangular number :  " << triangNb << " ==> nb of factors : " << nOfFactors << endl << "Bye!" << endl;
  return 0;
}
  
