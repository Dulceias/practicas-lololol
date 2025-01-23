#include <iostream>
using namespace std;

int factorial(int n){
        if(n == 0){
            return 1;
        } else {
            return n * factorial(n - 1);
        }
}

int main(){

    int n;
    cin >> n;

    cout << factorial(n);

}

/*

#include <iostream>
using namespace std;

int fibonacci(int n){
        if(n == 0){
            return 0;
        } else if(n == 1){
            return 1;
        } else {
            return fibonacci(n - 1) + fibonacci(n - 2);
        }
}

int main(){

    int n;
    cin >> n;

    cout << fibonacci(n);

}

*/