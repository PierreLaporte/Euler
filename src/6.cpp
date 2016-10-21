#include <iostream>
using namespace std;

int main(){

  long sumOfSquares = 0;
  long squareOfSum = 0;
  for(int i=1; i<=100; i++){
    sumOfSquares += i*i;
    squareOfSum += i;
  }
  squareOfSum *= squareOfSum;
  long difference = squareOfSum - sumOfSquares;

  cout << "The sum of the squares between 1 and 100 is : " << sumOfSquares << endl;
  cout << "The square of the sum between 1 and 100 is : " << squareOfSum << endl;
  cout << "The difference is : " << difference << endl << endl;

}
