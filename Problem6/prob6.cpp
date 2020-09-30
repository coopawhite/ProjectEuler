#include <iostream>
#include <cmath>

int main(){
    long int x = 0, y = 0, ans;
    int i = 0;

    for(i = 0; i < 101; i++){

        x += i;
        y += pow(i, 2);
    
    }

    x = pow(x, 2);
    ans = x - y;
    
    std::cout << ans << std::endl;
}