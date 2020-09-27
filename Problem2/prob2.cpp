#include <iostream>
#include <vector>
#include <numeric>

int main(){
    std::vector<int> arr = {1, 1}, even;
    long int newVal = 0, answer;

    while (1){
        newVal = arr.end()[-1] + arr.end()[-2];
        arr.push_back(newVal);
        if (newVal < 4000000){
            if (newVal % 2 == 0){
                std::cout << newVal << std::endl;
                even.push_back(newVal);
            }
        }
        else{
            break;
        }
    }

    std::cout << even.end()[-1] << std::endl << even.end()[-2] << std::endl;
    answer = std::accumulate(even.begin(), even.end(), 0);
    std::cout << answer << std::endl;

    return 0;

}


