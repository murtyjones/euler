#include <iostream>
#include <math.h>
using namespace std;


int main()
{
  long int bigGuy = 600851475143;
  long int sqrted = 775145;
  long int largestSoFar = 0;

  for (long int i = 1; i < sqrted; i = i + 2) {
    if(bigGuy % i != 0 ||
      i % 3 == 0 ||
      i % 5 == 0 ||
      i % 7 == 0 ||
      i % 13 == 0 ||
      i % 17 == 0) {
      continue;
    }

    cout << i << '\n';
  }

  return 0;
}
