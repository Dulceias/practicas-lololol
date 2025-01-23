#include <bits/stdc++.h>

int main(){
    
    int w, n, k;

    std::cin >> k >> n >> w;

    int dolTotal = 0;

    for(int i = 1; i <= w; i++){
        dolTotal += (k * i);
    }
    
    if(dolTotal > n){
        std::cout << dolTotal - n;
    } else {
        std::cout << 0;
    }

}