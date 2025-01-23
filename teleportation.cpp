#include <bits/stdc++.h>
using namespace std;

int main(){

    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);
    
    int a, b, x, y;

    cin >> a >> b >> x >> y;

    int minA = min(abs(a - x), abs(a - y));
    int minB = min(abs(b - x), abs(b - y));
    int telepTotal = minA + minB;
    int camTotal = abs(b - a);

    int dist = min(telepTotal, camTotal);

    cout << dist;

}