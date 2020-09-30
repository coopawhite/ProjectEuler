#this is a the seive method of attacking this problem, there is more efficient ways
import math

def primes(n):

    largest = None
    ceiling = int(math.sqrt(n)) + 1 
    thelist = [True] * ceiling
    others = []

    for i in range(2, ceiling):
        if thelist[i]:                          # if this number has not been checked before
            for j in range(2*i, ceiling, i):    # turn off multiples of i, they cannot be a prime if they are a multiple
                thelist[j] = False
            if n % i == 0:                      # if the mod is zero, they divide together, means this is a prime factor because i cannot be a multiple of any other number!
                largest = i                     # since i is incrementing, it is the new largest prime factor
                other = n/i                     # i is one prime factor, but we still need to anayse the other factor to see what the primes are in that.
                if other > ceiling:             # if the other factor is larger than the ceiling, it means it will be larger than any prime we find in this loop.
                    others.append(other)

    for factor in others:
        for i in range(2, ceiling):            #cfor each of the factors
            if thelist[i] and factor % i == 0: #cif this number has not been eliminated, it means that it could be prime, however is mod is 0, it is not a prime.
                break                          
        else:
            largest = factor                     # this must be the largest prime number

    return largest

if __name__ == "__main__":
    
    n = 600851475143
    print(primes(n))