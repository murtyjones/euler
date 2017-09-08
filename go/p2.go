package main

import "fmt"

func main() {
    i := 1
    prev := 1
    _prev := 0
    sum := 0

    for {
        _prev = i
        i = i + prev
        prev = _prev

        if(i % 2 == 0) {
            sum += i
        }

        if(sum >= 4000000) {
          break
        }
    }

    fmt.Println(sum)
}
