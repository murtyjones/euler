#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int squared(int n)
{
  return n * n;
}

int main()
{
  long int sumOfSquares = 0;
  long int squareOfSums = 0;

  for (int i = 1; i <= 100; i++) {
    sumOfSquares += squared(i);
  }

  for (int i = 1; i <= 100; i++) {
    squareOfSums += i;
  }
  squareOfSums = squared(squareOfSums);

  cout << squareOfSums - sumOfSquares << '\n';
}
