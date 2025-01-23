#include <iostream>
using namespace std;

int main(){
    long long n, q, a, b;
    cin >> n >> q;

    long long rq[n], pre[n + 1];
    for(long long i = 0; i < n; i++) cin >> rq[i];

    pre[0] = 0;
    for(long long i = 1; i <= n; i++){
        pre[i] = pre[i - 1] + rq[i - 1];
    }
    
    while(q--){
        cin >> a >> b;
        cout << pre[b] - pre[a - 1] << endl;
    }
}