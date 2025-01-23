#include <iostream>
using namespace std;

int main(){

    unsigned long long n, fib, fibob, temp;

    cin >> n;

    fib = 1, fibob = 1;
    int i = 2;

    if(n == 1){
        cout << 1;
        return 0;
    }

    while(fib < n){
        temp = fib;
        fib += fibob;
        fibob = temp;

        i++;

        if(fib == n){
            cout << i;
            return 0;
        }
    } cout << -1;

}