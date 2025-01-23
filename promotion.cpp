#include <bits/stdc++.h>

int main(){

    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);
    
    int Ag, Au, Pt;
    std::pair <int, int> bronze;
    std::pair <int, int> silver;
    std::pair <int, int> gold;
    std::pair <int, int> platinum;
    
    std::cin >> bronze.first >> bronze.second;
    std::cin >> silver.first >> silver.second;
    std::cin >> gold.first >> gold.second;
    std::cin >> platinum.first >> platinum.second;

    Ag = (silver.second + gold.second + platinum.second) - (silver.first + gold.first + platinum.first);
    Au = (gold.second + platinum.second) - (gold.first + platinum.first);
    Pt = (platinum.second) - (platinum.first);

    std::cout << Ag << std::endl << Au << std::endl << Pt << std::endl;
}