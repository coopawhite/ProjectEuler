#include <iostream>
#include <vector>

bool testNums(int n);

bool testNums(int n){

    // all nums from 1 -> 10 div into 11 -> 20, so we dont need them
    std::vector<int> test_nums{11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    //init our iterator, we will reverse iterate because there is a lesser chance
    //that a num is divis by 20 compared to 19. This will elim some searches
    std::vector<int>::reverse_iterator it;

    //set up our inverse iterator
    for(it = test_nums.rbegin() ; it != test_nums.rend(); ++it){
        //*it will be the value in the array
        if(n % *it == 0){
            continue;
        }
        else{
            return false;
        }
        return true;
    }

}

int main(){
    int n = 2520;

    while (1)
    {
        if(testNums(n) == true){
            std::cout << n << std::endl;
            break;
        }

        n += 2520;
    }
    

}