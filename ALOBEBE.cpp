#include <iostream>
using namespace std;

typedef long long ll;

int main(){
    ll n;
    int q;

    cin >> n >> q;

    ll arr[n], pre[n + 1];

    for(ll i = 0; i < n; i++) cin >> arr[i];

    pre[0] = 0;
    for(ll i = 1; i <= n; i++){
        pre[i] = pre[i - 1] + arr[i - 1];
    }

    while(q--){
        ll num, k, u, a, b;
        cin >> num;

        switch(num){
            case 1 :
                cin >> k >> u;
                arr[k - 1] = u;

                for(ll i = 1; i <= n; i++){
                    pre[i] = pre[i - 1] + arr[i - 1];
                }

                break;
            case 2 :
                cin >> a >> b;
                cout << pre[b] - pre[a - 1] << endl;
                break;
        }
    }
}