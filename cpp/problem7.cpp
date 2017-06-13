#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;

bool isPrimish(int n, vector<int> primes)
{
  for (int i = 0; i < primes.size(); i++) {
    if(n % primes[i] == 0)
      return false;
  }

  return true;
}

int main()
{
  vector<int> primes;
  primes.push_back(2);

  int i = 3;
  while(primes.size() < 10001) {
    if(isPrimish(i, primes)) {
      primes.push_back(i);
    }
    i = i + 2;
  }

  cout << primes.back() << '\n';

  return 0;
}
