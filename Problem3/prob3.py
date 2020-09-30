#this is a the seive method of attacking this problem, there is more efficient ways
import math

def primes(number):
  
    for prime_factor in range(2, int(number**(0.5)) + 1):

            while number % prime_factor == 0:

                number /= prime_factor

            if number == 1 or number == prime_factor:
                print(prime_factor)
                break
    return prime_factor

if __name__ == "__main__":
    
    n = 600851475143
    print(primes(n))