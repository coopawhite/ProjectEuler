#include <iostream>
#include <vector>
#include <numeric>


int main(){

    int number = 1000, i = 0, answer = 0;
    std::vector<int> arr;

    while(i < number){

        if ((i % 3 == 0) || (i % 5 ==0)){
            arr.push_back(i);}
            
        i++;
    }

    answer = std::accumulate(arr.begin(), arr.end(), 0);
    std::cout<<answer<<std::endl;



}
