#include <iostream>
using namespace std;

int main(){

  int i=21;
  while(1)
  {
    if (i%11==0 && i%12==0 && i%13==0 && i%14==0 && i%15==0 && i%16==0 &&
        i%17==0 && i%18==0 && i%19==0)
    {
      break;
    }
    i++;
  }

  cout << "the smallest dividable number is : " << i << endl;
  return 0;
}
