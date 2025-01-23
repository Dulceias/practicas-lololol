#include <iostream>
using namespace std;

int main(){
    int N, Q, GTotal;

    cin >> Q >> N;

    int x[N];

    for(int i = 0; i < N; i++){ 
        cin >> x[i];
    }

    while(Q--){
        cin >> GTotal;

        int cantAutos = 0, i = 0;

        for(int i = 0; i < N; i++){
            if(GTotal >= x[i]){
                GTotal -= x[i];
                cantAutos++;
            } else {
                break;
            }
        }

        cout << cantAutos << " " << GTotal << endl;
    }

}