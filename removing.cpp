#include <iostream>

int main(){
    int n, count = 0;
    std::cin >> n;

    while(n > 0){
        int temp = n, maxs = 0;

        while(temp > 0){
            maxs = std::max(maxs, temp % 10);
            temp /= 10;
        }

        n -= maxs;
        count++;
    }

    std::cout << count;
}