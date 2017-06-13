#include <iostream>
#include <math.h>
#include <string>
using namespace std;

bool isEvenlyDivisible(int n)
{
  for (int i = 1; i <= 20; i++) {
    if(n % i != 0)
      return false;
  }

  return true;
}

int main()
{
  bool succeeded = false;
  int i = 20;
  while(!succeeded) {
    if(isEvenlyDivisible(i))
      succeeded = true;
    else
      i++;
  }

  cout << i << '\n';

}
