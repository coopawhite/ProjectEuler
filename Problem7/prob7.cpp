#include <vector>
#include <iostream>
#include <cmath>

bool isPrime(int n);

bool isPrime(int n){
    int i;

    //through all odd numbers
    for(i = 3; i < sqrt(n) + 1; i+=2){

        //if it isnt a clean div, keep going
        if(n % i != 0){
            continue;
        }
        else{
            return false;
        }
    }
    return true;

}

int main(){
    std::vector<int> primes{1, 2}; //init it with 2 as our algo will not detect 2 as a prime
    int n = 3;

    while (primes.size() < 10001) 
    {
        if(isPrime(n) == true){
            primes.push_back(n);
            std::cout << primes.size() << " is " << n << std::endl;
        }
        n+=2; //test all odd numbers, as all primes are odd
    }  
}