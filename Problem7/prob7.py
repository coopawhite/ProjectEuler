import math

def isPrime(n):
    for i in range(3, int(math.sqrt(n))+1, 2):
        if n % i != 0:
            continue
        else:
            return False
    return True

if __name__ == "__main__":
    
    primes = [2]
    n = 3

    while len(primes) < 10001:
        if isPrime(n):
            primes.append(n)
        n+=2 #all primes are odd, so disregard evens
        print(len(primes))
    print(primes[-1])