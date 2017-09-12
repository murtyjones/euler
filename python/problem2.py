i = 1
prev = 1
_prev = 1
sum = 0

while True:
    _prev = i
    i = i + prev
    prev = _prev

    if i % 2 == 0:
        sum += i

    if sum >= 4000000:
        print sum
        break
