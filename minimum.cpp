#include <iostream>
using namespace std;

int main(){
    long long n, q, a, b;
    cin >> n >> q;

    long long rq[n];
    for(long long i = 0; i < n; i++) cin >> rq[i];

    
    while(q--){
        cin >> a >> b;
        long long min = 1e9;
        for(long long i = a - 1; i < b; i++){
            if(min > rq[i]){
                min = rq[i];
            }
        }

        cout << min << endl;
    }
}