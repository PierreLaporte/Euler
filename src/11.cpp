#include "utils.hpp"

int main(){
  
  int n = 20;
  
  int** a = new int*[n];
  for(int i=0; i<n; i++){
    a[i] = new int[n];
  }
  
  // lecture du tableau
  ifstream f("pb9Input.txt");
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      f >> a[i][j];
    }
  }

  int product;
  int maxProduct = 0;
  // calcul des produits adjacents horizontaux
  for(int i=0; i<n; i++){
    for(int j=0; j<n-4; j++){
      product = a[i][j];
      for(int k=1; k<4; k++){
        product *= a[i][j+k];
      }
      if(product>maxProduct) maxProduct=product;
    }
  }
  
  // calcul des produits adjacents verticaux
  for(int i=0; i<n-4; i++){
    for(int j=0; j<n; j++){
      product = a[i][j];
      for(int k=1; k<4; k++){
        product *= a[i+k][j];
      }
      if(product>maxProduct) maxProduct=product;
    }
  }
  
  // calcul des produits adjacents diagonaux (de haut en bas, gauche a droite)
  for(int i=0; i<n-4; i++){
    for(int j=0; j<n-4; j++){
      product = a[i][j];
      for(int k=1; k<4; k++){
        product *= a[i+k][j+k];
      }
      if(product>maxProduct) maxProduct=product;
    }
  }
  
  // calcul des produits adjacents diagonaux (de bas en haut, gauche a droite)
  for(int i=3; i<n; i++){
    for(int j=0; j<n-4; j++){
      product = a[i][j];
      for(int k=1; k<4; k++){
        product *= a[i-k][j+k];
      }
      if(product>maxProduct) maxProduct=product;
    }
  }
  
  cout << "the maximum product is : " << maxProduct << endl;
  cout << endl;
  return 0;
}
