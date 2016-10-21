#include "utils.hpp"

int main(){
  
  int nsize = 1000;
  ifstream f;
  
  // lecture des chiffres dans le tableau "numbers"
  f.open("pb8Number.txt");
  int* digits = new int[nsize];
  char input;
  for(int i=0; i<nsize; i++){
    f >> input;
    digits[i] = int(input - '0');
  }
  f.close();
  
  
  // recherche du max des produits de 13 chiffres adjacents
  long product;
  long maxProduct = 0;
  for(int i=0; i<nsize-13;i++){
    product = digits[i]; 
    cout << digits[i] << " ";
    for(int j=1; j<13; j++){
      cout << digits[i+j] << " ";
      product *= digits[i+j];
    }
    cout << "product : " << product << endl;
    if(product>maxProduct) maxProduct=product;
  }
  
  cout << "The maximum product is : " << maxProduct << endl;
  return 0;
}
