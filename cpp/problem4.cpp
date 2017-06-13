#include <iostream>
#include <math.h>
#include <string>
using namespace std;

bool isPalindrome(string n)
{
  int length = n.length();
  if(length < 5) return false;
  int isSixLong = (length == 6);
  int firstHalfEnd = (isSixLong) ? 3 : 2;
  int lastHalfEnd = (isSixLong) ? 6 : 5;

  string firstHalf = n.substr(0, firstHalfEnd);
  string lastHalf = n.substr(3, lastHalfEnd);

  reverse(lastHalf.begin(), lastHalf.end());
  bool blah = firstHalf.compare(lastHalf);

  return blah == 0;
}


int main()
{
  int largest = 0;
  for (int i = 999; i > 0; i = i - 1) {
    for (int j = 999; j > 0; j = j - 1) {
      long int ij = i * j;
      if(isPalindrome(to_string(ij))) {
        if (ij > largest)
          largest = ij;
        break;
      }
    }
  }
  cout << largest << '\n';

  return 0;
}
