def isPrime(integer):
    for i in range(2, integer/2 +1):
        if (integer % i) == 0:
            return False
    return True

print isPrime(5)
