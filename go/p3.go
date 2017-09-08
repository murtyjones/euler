package main

import "fmt"

func powInt(n int, p float32) (int) {
  i := float32(n) * p
  return int(i)
}

func isPrime(n int) (bool) {
  if n == 2 || n == 3 { return true }
  if n < 2 || n % 2 == 0 { return false }
  if n < 9 { return true }
  if n % 3 == 0 { return false }
  r := powInt(n, 0.5)
  f := 5
  for f <= r {
    fmt.Println(r)
    if n % f == 0 { return false }
    if n % (f + 2) == 0 { return false }
    f += 6
  }
  return true
}

func main() {
  for i := 600851475143 / 2; i > 0; i-- {
    if(isPrime(i)) {
      fmt.Println("this is prime:", i)
      break
    } else {
      fmt.Println("b")
    }
  }
}
