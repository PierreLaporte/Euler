#include "utils.hpp"
// pb 9 euler : trouver a,b,c le triplet pythagoricien tel que a+b+c=1000

int main(){
  
  int a=1;
  int b=1;
  float c = sqrt(a*a + b*b);
  // l'équation a résoudre est : a + b + c = 1000
  int termeGauche = a + b + c;
  
  while(termeGauche != 1000){
    b = a;
    termeGauche=0;
    while(termeGauche < 1000){
      c = sqrt(a*a+b*b);
      if(!fmod(c,1)){
        termeGauche = a + b + c;
        cout << "a=" << a << "; b=" << b << "; c=" << c << "; termeGauche= " << termeGauche << endl;
      }
      b++;
    }
    a++;
  }
  b--;
  a--;
  
  cout << "le bon triplet est : a=" << a << "; b=" << b << "; c=" << c << endl;
  cout << "son produit vaut : " << a*b*c << endl;
  return 0;
}
