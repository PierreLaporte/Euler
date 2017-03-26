#include "utils.hpp"

void sentinel(int i)
{
  std::cout << i << std::endl;
}

vector<int> eratosthenesSieve(int bound){
  /* this function returns the list of prime numbers between 1 and the number bound
     given */
  
  // stupid cases
  if(bound == 0 || bound == 1){
    cerr << "Error : the argument (bound) for erastotheneSieve must be 2 or above" << endl;
    exit(1);
  }
  
  vector<bool> numberList(bound+1,true);
  
  int testNumber = 2;
  auto t1 = Clock::now();
  while(testNumber<=sqrt(bound)){
    // we start with testNumber=2. we "mark" (by setting them to zero) the numbers that
    // are multiples of testNumber : 2p, 3p, etc. until we reach bound.
    for(int mark=2*testNumber; mark<=bound; mark+=testNumber)
        numberList[mark] = false;

    // finding the next non marked (non zero) number in the list
    testNumber++;
    while(numberList[testNumber] == false){
      testNumber++;
    }
  }
  auto t2 = Clock::now();
  cout << "sieve loop : " << std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1).count() << " ms" << endl;
  int j = 0;
  t1 = Clock::now();
  vector<int> primeList(bound);
  for(int i=2; i<=bound; i++){
    if(numberList[i] != false){
      primeList[j] = i;
      j++;
    }
  }
  t2 = Clock::now();
  cout << "list making loop : " << chrono::duration_cast<std::chrono::milliseconds>(t2 - t1).count() << " ms" << endl;
  return primeList;
}

map<int,int> primeFactorization(int nToFactorize){
  
  map<int,int> primesAndExponents;
  if(nToFactorize == 0){
    primesAndExponents[0] = 1;
    return primesAndExponents;
  }else if(nToFactorize == 1){
    primesAndExponents[1] = 1;
    return primesAndExponents;
  }
  
  vector<int> primeList = eratosthenesSieve(nToFactorize);
  /*
  for(int i=0; i<primeList.size(); i++){
    cout << primeList[i] << " ";
  }
  cout << endl;    
  */

  auto t1 = Clock::now();
  unsigned int i = 0;
  while(i<primeList.size() && nToFactorize != 1){
    if(nToFactorize%primeList[i] == 0){
      //cout << "found a divisor : " << primeList[i] << endl;
      nToFactorize /= primeList[i];
      //cout << "n = " << nToFactorize << endl;
      if(primesAndExponents.find(primeList[i]) == primesAndExponents.end()){
      primesAndExponents[primeList[i]] = 1;
      }else{
      primesAndExponents[primeList[i]]++;
      }
      i = 0;
      
    }else{
      i++;
    }
  }
  auto t2 = Clock::now();
  cout << "factorization loop : " << chrono::duration_cast<std::chrono::milliseconds>(t2-t1).count() << "ms" << endl;
  return primesAndExponents;
}


deque<int> sommeGrandsNombres(deque<int> a, deque<int> b)
{
  deque<int> resultat;

  if(a.size() > b.size())
  {
    int tailleMax = a.size();
    int tailleMin = b.size();
    int diff = tailleMax - tailleMin;

    resultat.resize(tailleMax);

    int retenue = 0;    
    for(int i=tailleMin-1; i>=0; i--)
    {
      int somme = a[i+diff] + b[i] + retenue;
      if(somme>=10)
      {
        retenue = 1;
        somme -= 10;
      }
      else
        retenue = 0;

      resultat[i+diff] = somme;
    }
    for(int i=diff-1; i>=0; i--)
    {
      int somme = a[i] + retenue;
      if(somme>=10)
      {
        retenue = 1;
        somme -= 10;
      }
      else
        retenue = 0;

      resultat[i] = somme;
    }

    if(retenue == 1) resultat.push_front(retenue);
  }
  else
  {
    int tailleMax = b.size();
    int tailleMin = a.size();
    int diff = tailleMax - tailleMin;

    resultat.resize(tailleMax);

    int retenue = 0;    
    for(int i=tailleMin-1; i>=0; i--)
    {
      int somme = a[i] + b[i+diff] + retenue;
      if(somme>=10)
      {
        retenue = 1;
        somme -= 10;
      }
      else
        retenue = 0;

      resultat[i+diff] = somme;
    }
    for(int i=diff-1; i>=0; i--)
    {
      int somme = b[i] + retenue;
      if(somme>=10)
      {
        retenue = 1;
        somme -= 10;
      }
      else
        retenue = 0;

      resultat[i] = somme;
    }

    if(retenue == 1) resultat.push_front(retenue);
  }

  return resultat;
}