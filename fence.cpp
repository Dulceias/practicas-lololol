#include <iostream>

int main(){

    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    int a, b, c, d, maxx, maxs, minx, mint;
    std::cin >> a >> b >> c >> d;

    maxs = std::max(a, b);
    maxx = std::max(c, d);
    maxs = std::max(maxs, maxx);

    mint = std::min(a, b);
    minx = std::min(c, d);
    mint = std::min(mint, minx);

    std::cout << maxs - mint;
}