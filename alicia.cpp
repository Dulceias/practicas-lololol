#include <iostream>
using namespace std;

int binary(int i, int P[], int L[], int mint, int maxs){
    while(mint <= maxs){
        int guess = (mint + maxs) / 2;
        if (P[guess] == L[i]){
            return guess + 1;
        } else if(P[guess] < L[i]){
            mint = guess + 1;
        } else if(P[guess] > L[i]){
            maxs = guess - 1;
        }
    }
    return 0;
}

int main(){
    int M;
    cin >> M;

    int P[M];
    for(int i = 0; i < M; i++){
        cin >> P[i];
    } 

    int N;
    cin >> N;

    int L[N];
    for(int i = 0; i < N; i++){
        cin >> L[i];
    }

    int pos = 0;

    for(int i = 0; i < N; i++){
        pos = binary(i, P, L, 0, M);
        cout << pos << " ";
    }
}
