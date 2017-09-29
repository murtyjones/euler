

def isPalindrome(n):
    nFlipped = n[::-1]
    return n == nFlipped



largest = 0;
i = 999
j = 999
while i > 0:
    while j > 0:
        ij = i * j
        if isPalindrome(str(ij)):
            print ij
        j -= 1
    i -= 1

print largest
