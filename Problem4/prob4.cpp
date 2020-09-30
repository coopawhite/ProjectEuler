#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

bool isPalindrome(int n);

bool isPalindrome(int n){

    //convert n to a string
    std::string nstr = std::to_string(n), nstr_rev(nstr);

    //reverse the string and same to a new var
    std::reverse(nstr_rev.begin(), nstr_rev.end());

    //if the two strings are the same
    if(nstr.compare(nstr_rev) == 0) {
        return true;
    }

    else{
        return false;
    }
}

int main(){
    int i, j;
    std::vector<int> palindromes;
    std::vector<int>::iterator result;

    //loop through all the numbers
    for(i=100; i<1000; i++){
        for(j=100; j<1000; j++){
            if(isPalindrome(i*j) == true){
                palindromes.push_back(i*j);
            }
        }
    }

    //find the max of the pallindromes array
    result = std::max_element(palindromes.begin(), palindromes.end());
    std::cout << "Max pallindrome is " << *result <<  std::endl;
}