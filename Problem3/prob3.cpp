#include <iostream>
#include <vector>
#include <cmath>

//function definitions
int primes(long int n);


int main(){
    long int n = 600851475143, largePrime;

    std::cout << "Finding prime" << std::endl;
    largePrime = primes(n);
    return 0;
}

int primes(long int n){
    long long int prime_factor, ceiling;

    ceiling = sqrt(n) + 1;

    for(prime_factor=2; prime_factor<ceiling; prime_factor++){

        while(n % prime_factor == 0){
            n /= prime_factor;
        }

        if((n == 1) || (n == prime_factor)){
            std::cout << prime_factor << std::endl;
            break;
        }    
    }


        return prime_factor;
}

    

